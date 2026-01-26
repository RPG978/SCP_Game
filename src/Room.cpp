#include "Room.h"
#include "Item.h"
#include "Puzzle.h"

Room::Room(const std::string& name)
    : name(name), puzzle(nullptr) {}

Room* Room::getExit(const std::string& direction) {
    // Will return exits[direction]
    return nullptr;
}

bool Room::hasPuzzle() const {
    return puzzle != nullptr;
}
