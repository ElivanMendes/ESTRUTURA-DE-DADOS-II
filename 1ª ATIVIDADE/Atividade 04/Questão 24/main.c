#include <stdio.h>
#include <stdlib.h>

void lerTamVet(int *tam){

    printf("Digite o Tamanho do Vetor: ");
    scanf("%d", &*tam);

    printf("\n");
}

int lerValores(int i){

    int valor;

    printf("Digite o Valor da Posicao %d: ", i);
    scanf("%d", &valor);

    return valor;
}

void valorMinMax(int *v, int tam, int *min, int *max){

    *min = v[0];
    *max = v[0];

    for(int i = 1; i < tam; i++){

        if(v[i] > *max){

            *max = v[i];
        }

        if(v[i] < *min){

            *min = v[i];
        }
    }
}

void imprimir(int *v, int tam, int min, int max){

    printf("\n\tValores: ");

    for(int i = 0; i < tam; i++){

        printf("%d ", v[i]);
    }

    printf("\n");

    printf("\n\tValor Minino: %d\n", min);
    printf("\tValor Maximo: %d\n", max);
}

int main(){

    int *vet, tam, valorMax, valorMin;

    lerTamVet(&tam);

    vet = malloc(tam * sizeof(int));

    if(vet != NULL){

    for(int i = 0; i < tam; i++){

        vet[i] = lerValores(i);
    }

    }
    else {

        printf("\n\tERRO AO ALOCAR MEMORIA!\n");
    }

    valorMinMax(vet, tam, &valorMin, &valorMax);

    imprimir(vet, tam, valorMin, valorMax);

    return 0;
}
