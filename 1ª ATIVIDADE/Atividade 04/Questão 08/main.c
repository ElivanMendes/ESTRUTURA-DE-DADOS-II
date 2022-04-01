#include <stdio.h>
#include <stdlib.h>

int main(){

    float vetor[10];

    printf("\n");

    for(int i = 0; i < 10; i++){

        printf("\tEndereco da Posicao %d: %p\n", i, &vetor[i]);
    }

    return 0;
}
