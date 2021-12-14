#include <iostream>
#include "lib/Player.h"

using namespace std;
int main() {
    Player a;
    Player b;

    a.setChoice(true);
    b.setChoice(true);

    a.play_against(b);
    a.play_against(b);
    a.play_against(b);

    printf("Player A: choice = %d, bank = %d \n", a.getChoice(), a.getBank());
    printf("Player B: choice = %d, bank = %d \n", b.getChoice(), b.getBank());
    return 0;
}


