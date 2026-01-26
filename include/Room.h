#pragma once
#include <string>
#include <map>
#include <vector>

class Item;
class Puzzle;

/**
 * @class Room
 * @brief Represents a location in the game world that the player can enter.
 *
 * Responsibilities:
 * 
 *   - Store the room's name and descriptive text
 * 
 *   - Maintain directional exits to other rooms
 * 
 *   - Hold any items present in the room
 * 
 *   - Optionally contain a Puzzle that must be solved
 *
 * Design Notes:
 *   - Exits are stored in a map keyed by direction strings (e.g., "north").
 * 
 *   - Items are stored by value since they are lightweight.
 * 
 *   - The puzzle pointer is optional and may be nullptr.
 */
class Room {
public:

    /**
     * @brief Constructs a Room with the given name.
     * @param name The display name of the room.
     */
    Room(const std::string& name);

    /**
     * @brief Retrieves the Room connected in the given direction.
     * @param direction The direction to check (e.g., "north").
     * @return A pointer to the connected Room, or nullptr if none exists.
     */
    Room* getExit(const std::string& direction);

    /**
     * @brief Checks whether the room contains a puzzle.
     * @return True if a puzzle is assigned to this room.
     */
    bool hasPuzzle() const;

private:
    std::string name;                     // The room's display name.
    std::string description;              // Text describing the room.
    std::map<std::string, Room*> exits;   // Directional exits to other rooms.
    std::vector<Item> items;              // Items present in the room.
    Puzzle* puzzle;                       // Optional puzzle contained in the room.
};
