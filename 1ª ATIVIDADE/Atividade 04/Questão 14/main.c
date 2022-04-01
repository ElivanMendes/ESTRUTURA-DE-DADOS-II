#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int *v, int num1, int num2, int num3){

    *(v + 0) = num1;
    *(v + 1) = num2;
    *(v + 2) = num3;
}

void imprimir(int *v){

    printf("\n\tValores: ");

    for(int i = 0; i < 3; i++){

        printf("%d ", v[i]);
    }

    printf("\n");
}

int main(){

    int vetor[3];

    preencherVetor(vetor, 5, 15, 45);

    imprimir(vetor);

    return 0;
}
