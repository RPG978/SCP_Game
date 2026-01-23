#include "GameEngine.h"
#include <iostream>

int main() {
    try {
        /* Object containing:
        * - a Player*
        * - a map of Room*
        * - a PuzzleEngine
        * - a DatabaseManager*
        * - any flags
        * - other internal states
        */
        GameEngine engine;

        engine.loadWorld();   // Load rooms, puzzles, player, etc.
        engine.run();         // Enter the main game loop
    }
    catch (const std::exception& ex) {
        std::cout << "Fatal error: " << ex.what() << "\n";
        return 1;
    }
    catch (...) {
        std::cout << "An unknown error occurred.\n";
        return 1;
    }

    return 0;
}
