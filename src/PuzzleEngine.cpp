#include "PuzzleEngine.h"
#include "Puzzle.h"
#include "Player.h"

bool PuzzleEngine::evaluate(Puzzle& p, const std::string& answer) {
    // Will compare answer to p.solution
    return false;
}

void PuzzleEngine::dispatch(Puzzle& p) {
    // Will route puzzle to correct algorithm based on p.type
}

void PuzzleEngine::giveReward(Player& player, Puzzle& p) {
    // Will add p.reward to player inventory
}
