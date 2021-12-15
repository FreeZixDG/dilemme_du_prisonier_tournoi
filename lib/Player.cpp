//
// Created by MyPC on 14-Dec-21.
//

#include "Player.h"

Player::Player() : this_bank(0), this_choice() {}


const int &Player::getBank() const { return this_bank; }


const bool &Player::getChoice() const { return this_choice; }


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


void Player::setChoice(bool choice) { this_choice = choice; }

void Player::StrategyAlwaysTrust() { this_choice = true; }

void Player::StrategyAlwaysBetray() { this_choice = false; }

void Player::play_n_games(Player &opponent, int n)
{
    for (int i = 0; i < n; i++)
    {
        Player::play_against(opponent);
    }
}
