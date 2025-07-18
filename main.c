#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "get_player_throw.h"

void main(int argv, char argc[]) {

    char*throws[] = {
        "rock",
        "paper",
        "scissors"
    };
    
    srand(time(NULL));
    int random_int = rand() % 3;

    printf("CPU   : %s\n", throws[random_int]);
    printf("Player: %s\n", throws[player_throw()]);
    
}