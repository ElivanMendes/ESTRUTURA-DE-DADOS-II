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

int maiorValor(int *v, int tam){

    int maiorV = v[0];

    for(int i = 1; i < tam; i++){

        if(v[i] > maiorV){

            maiorV = v[i];
        }
    }

    return maiorV;
}

void imprimir(int *v, int tam){

    printf("\n\tValores: ");

    for(int i = 0; i < tam; i++){

        printf("%d ", v[i]);
    }

    printf("\n");

    printf("\n\tMaior Valor: %d\n", maiorValor(v, tam));
}

int main(){

    int *vet, tam;

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

    imprimir(vet, tam);

    return 0;
}
