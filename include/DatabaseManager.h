#pragma once // Include this header file only once per compilation
#include <map>
#include <string>

// Forward declarations - > refer to classes that exist somewhere
class Room;
class Puzzle;

/**
 * @class DatabaseManager
 * @brief Handles all SQLite database operations for Rooms and Puzzles.
 *
 * Responsibilities:
 * 
 *   - Open and manage the SQLite database connection
 * 
 *   - Load Room objects from the database
 * 
 *   - Load Puzzle objects from the database
 * 
 *   - Persist puzzle solved state back to storage
 * 
 *   - Isolate all SQL logic from the rest of the game engine
 *
 * Design Notes:
 * 
 *   - The database connection is stored as an opaque pointer (void*)
 *     to avoid exposing SQLite-specific types in the header.
 * 
 *   - Rooms are returned as pointers to preserve identity and allow
 *     shared references across the game world.
 * 
 *   - Puzzles are returned by value because they are self-contained
 *     and do not require shared ownership.
 */
class DatabaseManager {
public:

    /**
     * @brief Loads all Room objects from the database.
     * @return A map keyed by room name, each pointing to a dynamically
     *         allocated Room instance.
     */
    std::map<std::string, Room*> loadRooms();

    /**
     * @brief Loads all Puzzle objects from the database.
     * @return A map keyed by puzzle ID, each containing a Puzzle value.
     */
    std::map<int, Puzzle> loadPuzzles();

    /**
     * @brief Saves the solved/unsolved state of a Puzzle back to the database.
     * @param p A reference to the Puzzle whose state should be persisted.
     */
    void savePuzzleState(const Puzzle& p);

private:
    void* connection;  // Opaque pointer to sqlite3*, defined in the .cpp file
};

