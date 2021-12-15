#include <iostream>
#include "lib/Player.h"

using namespace std;
int main() {
    Player a;
    Player b;

    a.StrategyAlwaysTrust();
    b.StrategyAlwaysBetray();

    a.play_n_games(b, 30);

    printf("Player A: strategy = %d, bank = %d \n", a.getChoice(), a.getBank());
    printf("Player B: strategy = %d, bank = %d \n", b.getChoice(), b.getBank());
    return 0;
}


