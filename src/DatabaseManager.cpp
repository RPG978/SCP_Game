#include "DatabaseManager.h"
#include "Room.h"
#include "Puzzle.h"

std::map<std::string, Room*> DatabaseManager::loadRooms() {
    // Will load rooms from SQLite
    return {};
}

std::map<int, Puzzle> DatabaseManager::loadPuzzles() {
    // Will load puzzles from SQLite
    return {};
}

void DatabaseManager::savePuzzleState(const Puzzle& p) {
    // Will update puzzle state in SQLite
}
