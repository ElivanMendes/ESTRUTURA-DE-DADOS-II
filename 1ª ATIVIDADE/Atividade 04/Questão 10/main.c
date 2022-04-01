#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[5];

    for(int i = 0; i < 5; i++){

        printf("Digite o Numero da Posicao [%d]: ", i);
        scanf("%d", &*(vetor + i));
    }

    printf("\n\tDobro dos Numeros do Vetor: ");

    for(int i = 0; i < 5; i++){

        *(vetor + i) = *(vetor + i) * 2;

        printf("%d ", *(vetor + i));
    }

    printf("\n");

    return 0;
}
