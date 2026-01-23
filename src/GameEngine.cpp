#include "GameEngine.h"
#include "Player.h"
#include "Room.h"
#include "PuzzleEngine.h"
#include "DatabaseManager.h"
#include <iostream>

GameEngine::GameEngine()
    : player(nullptr), puzzleEngine(nullptr), db(nullptr) {}

void GameEngine::run() {
    std::string input;

    while (running) {
        std::cout << "> ";
        std::getline(std::cin, input);

        // Let the parser + dispatcher handle everything
        processCommand(input);
    }
}

void GameEngine::loadWorld() {
    // Will load rooms + puzzles from DatabaseManager
}

void GameEngine::processCommand(const std::string& input) {
    // Convert raw input into a structured command
    CommandParser::Command cmd = parser.parse(input);

    if (cmd.verb == "go") {
        player->move(cmd.argument);
        std::cout << "You went " << cmd.argument << std::endl;
    }
    else if (cmd.verb == "take") {
        std::cout << "You stole " << cmd.argument << std::endl;
        // TODO: implement item pickup
    }
    else if (cmd.verb == "use") {
        std::cout << "You used " << cmd.argument << std::endl;
        // TODO: implement item usage
    }
    else if (cmd.verb == "solve") {
        std::cout << "You solved " << cmd.argument << std::endl;
        // TODO: integrate puzzle solving
    }
    else if (cmd.verb == "quit") {
        std::cout << "Are you sure you want to quit? (yes/no): ";

        std::string response;
        std::getline(std::cin, response);

        // Parse the confirmation using the same parser
        CommandParser::Command confirm = parser.parse(response);

        if (confirm.verb == "yes" || confirm.verb == "y") {
            std::cout << "Goodbye.\n";
            running = false;
        }
        else {
            std::cout << "Continuing...\n";
        }
    }


    else {
        std::cout << "I don't understand that command.\n";
    }
}

