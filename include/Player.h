#pragma once
#include <vector>
#include <string>

class Room;
class Item;

/**
 * @class Player
 * @brief Represents the player character and manages movement and inventory.
 *
 * Responsibilities:
 * 
 *   - Track the player's current room
 * 
 *   - Move the player through the world based on directional commands
 * 
 *   - Maintain an inventory of collected items
 * 
 *   - Provide helper methods for checking item possession
 *
 * Design Notes:
 * 
 *   - The player holds a pointer to the current Room; ownership is managed
 *     by the GameEngine or world loader, not by the Player itself.
 * 
 *   - Inventory stores Item objects by value since items are lightweight.
 */
class Player {
public:

    /**
     * @brief Constructs a Player with no items and no starting room assigned.
     */
    Player();

    /**
     * @brief Moves the player to an adjacent room in the given direction.
     * @param direction The direction to move (e.g., "north", "south").
     *
     * The actual room transition is resolved by querying the current room's
     * exits. If no exit exists in the given direction, movement is ignored.
     */
    void move(const std::string& direction);

    /**
     * @brief Adds an item to the player's inventory.
     * @param item The item to add, stored by value.
     */
    void addItem(const Item& item);

    /**
     * @brief Checks whether the player possesses an item by name.
     * @param name The name of the item to search for.
     * @return True if the item is found in the inventory.
     */
    bool hasItem(const std::string& name) const;

private:
    Room* currentRoom;            //Pointer to the room the player is currently in.
    std::vector<Item> inventory;  //Collection of items the player has acquired.
};
