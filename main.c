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
    
    int score_p = 0;
    int score_c = 0;

    while(1) {

        srand(time(NULL));
        int throw_c = rand() % 3;
        int throw_p = get_player_throw();

        printf("\nCPU throw : %s  VS.  %s : Player throw\n", throws[throw_c], throws[throw_p]);
        
        int result = abs(throw_c - throw_p);
        //printf("%d\n", result);
        
        if (result == 0) {
            
            printf("tie\n");
        }
        else if (result == 1) {
            
            if (throw_c > throw_p) {
                
                score_c += 1;
                printf("You Lose!\n");
            }
            else {
                score_p += 1;
                printf("You win!\n");
            }
        }
        else if (result == 2) {
            
            if (throw_c < throw_p) {
                score_c += 1;
                printf("You Lose!\n");
            }
            else {
                score_p += 1;
                printf("You win!\n");
            }
        }
        
        printf("CPU score : %d\nPlayer score : %d\n");
        printf("press enter to play agin or type \"exit\" to exit: ");
        fgets(buffer, 10, stdin);

        if (strcmp(buffer, "exit\n") == 0) {
            break;
        }

    }


}