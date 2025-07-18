#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "player_throw.h"

void main(int argv, char argc[]) {

    char*throws[] = {
        "rock",
        "paper",
        "scissors"
    };

    char buffer[10];
    
    while(1) {

        srand(time(NULL));
        int throw_cpu = rand() % 3;

        int throw_p = get_player_throw();

        //TODO add game logic
        printf("CPU throw = %d\nPlayer throw = %d\n", throw_cpu, throw_p);

        printf("press enter to play agin or type \"exit\" to quit: ");
        fgets(buffer, 10, stdin);

        if (strcmp(buffer, "exit\n") == 0) {
            break;
        }

    }


}