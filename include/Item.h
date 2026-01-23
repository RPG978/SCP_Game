#pragma once
#include <string>

/**
 * @class Item
 * @brief Represents an object the player can collect or use during gameplay.
 *
 * Responsibilities:
 * 
 *   - Store the item's name and descriptive text
 * 
 *   - Provide a simple interface for using the item
 * 
 *   - Serve as a lightweight value object within the game world
 *
 * Design Notes:
 * 
 *   - The constructor provides default empty values so items can be created
 *     without requiring explicit initialization.
 * 
 *   - The use() method can be expanded later to support item-specific effects.
 */
class Item {
public:

    /**
     * @brief Constructs an Item with a name and description.
     * @param name The display name of the item.
     * @param desc A short description of the item.
     */
    Item(const std::string& name = "", const std::string& desc = "");

    /**
     * @brief Triggers the item's use behavior.
     *
     * This method currently acts as a placeholder. Future versions may
     * implement item-specific effects, interactions, or puzzle triggers.
     */
    void use();

private:
    std::string name;
    std::string description;
};
