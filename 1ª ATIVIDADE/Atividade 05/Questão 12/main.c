#include <stdio.h>
#include <stdlib.h>

int main(){

    int jogador1[5], jogador2[5];

    srand(time(NULL));

    for(int i = 0; i < 5; i++){

        jogador1[i] = 1 + rand() % 10;
        jogador2[i] = 1 + rand() % 10;
    }

    printf("\n\tCARTAS JOGADOR 1: ");

    for(int i = 0; i < 5; i++){

        printf("%d ", jogador1[i]);
    }

    printf("\n\tCARTAS JOGADOR 2: ");

    for(int i = 0; i < 5; i++){

        printf("%d ", jogador2[i]);
    }

    printf("\n");

    return 0;
}
