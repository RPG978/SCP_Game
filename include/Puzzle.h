#pragma once
#include <string>
#include "Item.h"

class Item;

/**
 * @class Puzzle
 * @brief Represents a puzzle the player must solve to progress or earn rewards.
 *
 * Responsibilities:
 * 
 *   - Store puzzle metadata such as type, prompt, solution, and parameters
 * 
 *   - Track whether the puzzle has been solved
 * 
 *   - Provide access to puzzle configuration data (e.g., JSON parameters)
 * 
 *   - Hold the reward item granted upon solving the puzzle
 *
 * Design Notes:
 * 
 *   - The puzzle ID corresponds to the database primary key.
 * 
 *   - Parameters are stored as raw JSON text and interpreted by PuzzleEngine.
 * 
 *   - The reward is stored by value since items are lightweight.
 * 
 *   - Puzzle state (solved/unsolved) is persisted by DatabaseManager.
 */
class Puzzle {
public:

    /**
     * @brief Constructs a Puzzle with the given database ID.
     * @param id The unique identifier for this puzzle.
     */
    Puzzle(int id);

    /**
     * @brief Retrieves the puzzle's type string.
     * @return The type of puzzle (e.g., "sequence", "logic", "scramble").
     */
    std::string getType() const;

    /**
     * @brief Retrieves the puzzle's parameter data.
     * @return A JSON string containing puzzle-specific configuration.
     */
    std::string getParameters() const;

private:
    int id;                 // Unique puzzle identifier from the database.
    std::string type;       // Puzzle type used by PuzzleEngine.
    std::string prompt;     // Text shown to the player when attempting the puzzle.
    std::string solution;   // Expected answer used for validation.
    std::string parameters; // JSON text containing puzzle-specific data.
    Item reward;            // Item granted upon solving the puzzle.
    bool isSolved;          // Tracks whether the puzzle has been completed.
};
