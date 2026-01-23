#include "Player.h"
#include "Room.h"
#include "Item.h"

Player::Player()
    : currentRoom(nullptr) {}

void Player::move(const std::string& direction) {
    // Will update currentRoom based on exits
}

void Player::addItem(const Item& item) {
    inventory.push_back(item);
}

bool Player::hasItem(const std::string& name) const {
    // Will search inventory
    return false;
}
