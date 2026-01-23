#pragma once
#include "CommandParser.h"
#include <map>
#include <string>


class Player;
class Room;
class PuzzleEngine;
class DatabaseManager;

/**
 * @class GameEngine
 * @brief Coordinates the main game loop, world loading, and command processing.
 *
 * Responsibilities:
 * 
 *   - Initialize subsystems
 * 
 *   - Load the world
 * 
 *   - Run the main loop
 * 
 *   - Process commands
 */
class GameEngine {
public:

    /**
     * @brief Constructs the GameEngine and initializes subsystem pointers.
     */
    GameEngine();

    /**
     * @brief Runs the main game loop, handling input and updating state.
     */
    void run();

    /**
     * @brief Loads all Rooms and Puzzles from the database.
     */
    void loadWorld();

    /**
     * @brief Parses and executes a single player command.
     * @param cmd The raw command string entered by the player.
     */
    void processCommand(const std::string& cmd);

private:
    Player* player;
    std::map<std::string, Room*> rooms;
    PuzzleEngine* puzzleEngine;
    DatabaseManager* db;
    CommandParser parser; // Parses raw player input into structured commands.
};

