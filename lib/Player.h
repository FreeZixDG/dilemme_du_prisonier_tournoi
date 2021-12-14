//
// Created by MyPC on 14-Dec-21.
//

#ifndef DILEMME_DU_PRISONIER_TOURNOII_PLAYER_H
#define DILEMME_DU_PRISONIER_TOURNOII_PLAYER_H


class Player
{
private:
    bool this_choice; // 1 = trust, 0 = betray
    int this_bank;

public:
    Player();
    bool getChoice() const;
    int getBank() const;

    void play_against(Player& opponent);

    void setChoice(bool choice);
    void addBank(int value);

};


#endif //DILEMME_DU_PRISONIER_TOURNOII_PLAYER_H
