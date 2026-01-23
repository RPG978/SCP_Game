#pragma once
#include <map>
#include <string>

class Puzzle;
class Player;

/**
 * @class PuzzleEngine
 * @brief Coordinates puzzle evaluation, dispatching, and reward handling.
 *
 * Responsibilities:
 * 
 *   - Evaluate player answers against puzzle solutions
 * 
 *   - Dispatch puzzles based on their type or configuration
 * 
 *   - Grant rewards to the player when puzzles are solved
 * 
 *   - Maintain an internal collection of puzzles indexed by ID
 *
 * Design Notes:
 * 
 *   - PuzzleEngine does not own Puzzle objects passed into its methods;
 *     it operates on references provided by the game engine.
 * 
 *   - The internal puzzle map may be used for caching, lookup, or
 *     preloading puzzle definitions depending on future design needs.
 */
class PuzzleEngine {
public:

    /**
     * @brief Evaluates a player's answer to a puzzle.
     * @param p The puzzle being attempted.
     * @param answer The player's submitted answer.
     * @return True if the answer is correct and the puzzle is solved.
     */
    bool evaluate(Puzzle& p, const std::string& answer);

    /**
     * @brief Dispatches the puzzle based on its type or configuration.
     * @param p The puzzle to dispatch.
     *
     * This method determines how the puzzle should be presented or processed.
     * It may route to different puzzle-handling logic depending on type.
     */
    void dispatch(Puzzle& p);

    /**
     * @brief Grants the puzzle's reward to the player if solved.
     * @param player The player receiving the reward.
     * @param p The puzzle whose reward should be given.
     */
    void giveReward(Player& player, Puzzle& p);

private:
    std::map<int, Puzzle> puzzles; // Internal puzzle storage indexed by ID.
};
