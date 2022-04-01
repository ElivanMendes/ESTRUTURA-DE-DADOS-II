#include <stdio.h>
#include <stdlib.h>

int main(){

    float matriz[3][3];

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            printf("\tEndereco da Posicao [%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }

    return 0;
}
