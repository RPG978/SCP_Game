#include "GameEngine.h"
#include "Player.h"
#include "Room.h"
#include "PuzzleEngine.h"
#include "DatabaseManager.h"
#include <iostream>

GameEngine::GameEngine()
    : player(nullptr), puzzleEngine(nullptr), db(nullptr) {}

void GameEngine::run() {
    // Temporary skeleton loop
}

void GameEngine::loadWorld() {
    // Will load rooms + puzzles from DatabaseManager
}

void GameEngine::processCommand(const std::string& input) {
    // Convert raw input into a structured command
    CommandParser::Command cmd = parser.parse(input);

    if (cmd.verb == "go") {
        player->move(cmd.argument);
    }
    else if (cmd.verb == "take") {
        // TODO: implement item pickup
    }
    else if (cmd.verb == "use") {
        // TODO: implement item usage
    }
    else if (cmd.verb == "solve") {
        // TODO: integrate puzzle solving
    }
    else if (cmd.verb == "quit") {
        std::cout << "Goodbye.\n";
        // TODO: set a running flag to false
    }
    else {
        std::cout << "I don't understand that command.\n";
    }
}

