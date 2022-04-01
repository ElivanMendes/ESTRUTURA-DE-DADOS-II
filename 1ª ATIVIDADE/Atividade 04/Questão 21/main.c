#include <stdio.h>
#include <stdlib.h>

void imprimir(int *v){

    printf("\n\tValores: ");

    for(int i = 0; i < 5; i++){

        printf("%d ", *(v + i));
    }

    printf("\n");
}

int main(){

    int *num, vetor[5] = {2, 5, 7, 9, 15};
    int a = 1;

    num = &a;

    for(int i = 0; i < 5; i++){

        vetor[i] += *num;
    }

    imprimir(vetor);

    return 0;
}
