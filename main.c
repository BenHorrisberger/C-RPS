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

        printf("\nCPU throw : %s  VS.  %s : Player throw\n", throws[throw_cpu], throws[throw_p]);

        int result = abs(throw_cpu - throw_p);
        //printf("%d\n", result);

        if (result == 0) {

            printf("tie\n");
        }
        else if (result == 1) {

            if (throw_cpu > throw_p) {
                
                printf("You Lose!\n");
            }
            else {

                printf("You win!\n");
            }
        }
        else if (result == 2) {

            if (throw_cpu < throw_p) {

                printf("You Lose!\n");
            }
            else {

                printf("You win!\n");
            }
        }

        printf("press enter to play agin or type \"exit\" to exit: ");
        fgets(buffer, 10, stdin);

        if (strcmp(buffer, "exit\n") == 0) {
            break;
        }

    }


}