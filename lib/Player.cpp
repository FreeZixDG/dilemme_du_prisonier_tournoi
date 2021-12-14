//
// Created by MyPC on 14-Dec-21.
//

#include "Player.h"

Player::Player() : bank(0), choice() {}

int Player::getBank() const { return this->bank; }

bool Player::getChoice() const { return this->choice; }

void Player::setChoice(bool choice) { this->choice = choice; }
