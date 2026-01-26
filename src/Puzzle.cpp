#include "Puzzle.h"
#include "Item.h"

Puzzle::Puzzle(int id)
    : id(id), isSolved(false) {}

std::string Puzzle::getType() const {
    return type;
}

std::string Puzzle::getParameters() const {
    return parameters;
}
