#include <stdio.h>
#include <stdlib.h>

void verificarVetor(int *v, int *maiorV, int *nVezes){

    *maiorV = *(v + 0);

    *nVezes = 0;

    for(int i = 1; i < 5; i++){

        if(*(v + i) > *maiorV){

            *maiorV = *(v + i);
        }
    }

    for(int i = 0; i < 5; i++){

        if(*maiorV == *(v + i)){

            *nVezes += 1;
        }
    }
}

void imprimir(int *v, int maiorV, int nVezes){

    printf("\n\tValores: ");

    for(int i = 0; i < 5; i++){

        printf("%d ", *(v + i));
    }

    printf("\n\n\tMaior Valor: %d\n", maiorV);
    printf("\n\tNumeros de Vezes que %d Ocorre: %d\n", maiorV, nVezes);
}

int main(){

    int vetor[5] = {5, 25, 2, 25, 9};
    int maiorValor, numVezes;

    verificarVetor(vetor, &maiorValor, &numVezes);

    imprimir(vetor, maiorValor, numVezes);

    return 0;
}
