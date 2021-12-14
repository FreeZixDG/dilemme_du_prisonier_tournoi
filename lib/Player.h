//
// Created by MyPC on 14-Dec-21.
//

#ifndef DILEMME_DU_PRISONIER_TOURNOII_PLAYER_H
#define DILEMME_DU_PRISONIER_TOURNOII_PLAYER_H


class Player
{
private:
    bool choice;
    int bank;

public:
    Player();
    bool getChoice() const;
    int getBank() const;

    void setChoice(bool choice);

};


#endif //DILEMME_DU_PRISONIER_TOURNOII_PLAYER_H
