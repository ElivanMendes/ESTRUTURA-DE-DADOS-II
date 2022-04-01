#include <stdio.h>
#include <stdlib.h>

void imprimir(int *v){

    printf("\n\tValores: ");

    printf("%d ", *(v + 0));
    printf("%d ", *(v + 1));
    printf("%d ", *(v + 2));

    printf("\n");
}

int main(){

    int vetor[3] = {10, 20, 40};

    imprimir(vetor);

    return 0;
}
