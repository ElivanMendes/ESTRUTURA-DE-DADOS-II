#include <stdio.h>
#include <stdlib.h>

void lerValores(int *v){

    for(int i = 0; i < 5; i++){

        printf("Digite o Numero da Posicao [%d]: ", i);
        scanf("%d", &*(v + i));
    }
}

void imprimirEnderecoValores(int *v){

    int cont = 0;

    printf("\n");

    for(int i = 0; i < 5; i++){

        if(*(v + i) % 2 == 0){

            printf("\tEndereco de Memoria da Posicao [%d]: %p\n", i, &*(v + i));

            cont++;
        }
    }

    if(cont == 0){

        printf("\tNENHUM NUMERO PAR!\n");
    }
}

int main(){

    int vetor[5];

    lerValores(&vetor);

    imprimirEnderecoValores(vetor);

    return 0;
}
