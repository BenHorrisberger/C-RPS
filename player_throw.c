#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int get_player_throw() {

    char* throws[] = {"rock", "paper", "scissors"};
    
    char buffer[10];

    printf("\n");
    printf("Enter your throw! Choose rock, paper, or scissors.\n>>> ");

    fgets(buffer, 10, stdin);

    buffer[strlen(buffer)-1] = '\0';

    for (int i = 0; i < 3; i++) {

        if (strcmp(buffer, throws[i]) == 0) {

            //printf("throw = %s, indx = %d\n", throws[i], i);

            return i;
        }
    }
    
    return 0;
}