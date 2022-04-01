#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int n){

    int cont = 0;

    for(int i = 0; i < n; i++){

        if(*(vet + i) < 0){

            cont++;
        }
    }

    return cont;
}

void imprimir(float *v){

    printf("\n\tValores: ");

    for(int i = 0; i < 5; i++){

        printf("%.2f ", *(v + i));
    }

    printf("\n\n\tQuantidade de Numeros Negativos: %d\n", negativos(v, 5));
}

int main(){

    float vetor[5] = {-1.25, 5.12, 10.97, -6.73, -3.84};

    imprimir(vetor);

    return 0;
}
