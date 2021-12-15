//
// Created by MyPC on 14-Dec-21.
//

#include "Player.h"

Player::Player() : this_bank(0), this_choice() {}

inline const int& Player::getBank() const { return this_bank; }

inline const bool& Player::getChoice() const { return this_choice; }

void Player::setChoice(bool choice) { this_choice = choice; }

void Player::play_against(Player& opponent)
{
    if (this_choice and opponent.getChoice())
    {
        Player::addBank(50);
        opponent.addBank(50);
    }

    else if (this_choice and !opponent.getChoice())
    {
        opponent.addBank(100);
    }

    else if (!this_choice and opponent.getChoice())
    {
        Player::addBank(100);
    }
}

void Player::addBank(int value) { this_bank += value; }
