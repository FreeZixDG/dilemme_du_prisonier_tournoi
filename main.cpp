#include <iostream>
#include "lib/Player.h"

using namespace std;
int main() {
    Player a;
    Player b;

    a.StrategyAlwaysTrust();
    b.StrategyAlwaysBetray();

    a.play_against(b);
    a.play_against(b);
    a.play_against(b);

    printf("Player A: strategy = %s, bank = %d \n", a.getChoice(), a.getBank());
    printf("Player B: strategy = %s, bank = %d \n", b.getStrategy(), b.getBank());
    return 0;
}


