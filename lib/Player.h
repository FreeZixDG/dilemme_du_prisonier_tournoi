//
// Created by MyPC on 14-Dec-21.
//

#ifndef DILEMME_DU_PRISONIER_TOURNOI_PLAYER_H
#define DILEMME_DU_PRISONIER_TOURNOI_PLAYER_H

class Player
{
private:
    bool this_choice; // 1 = trust, 0 = betray
    int this_bank;

public:
    Player();
    const bool& getChoice() const;
    const int& getBank() const;


    void play_against(Player& opponent);
    void play_n_games(Player& opponent, int n);
    void addBank(int value);

    void setChoice(bool choice);

    void StrategyAlwaysTrust();
    void StrategyAlwaysBetray();



};


#endif //DILEMME_DU_PRISONIER_TOURNOI_PLAYER_H
