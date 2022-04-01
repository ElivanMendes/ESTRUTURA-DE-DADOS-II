#include <stdio.h>
#include <stdlib.h>

void lerValores(int *v1, int *v2, int *tamV1, int *tamV2){

    printf("Digite o Tamanho do Vetor 1: ");
    scanf("%d", &*tamV1);

    printf("\n\tVETOR 1:\n\n");

    for(int i = 0; i < *tamV1; i++){

        printf("Digite o Elemento %d do Vetor: ", i);
        scanf("%d", &*(v1 + i));
    }

    printf("\nDigite o Tamanho do Vetor 2: ");
    scanf("%d", &*tamV2);

    printf("\n\tVETOR 2:\n\n");

    for(int i = 0; i < *tamV2; i++){

        printf("Digite o Elemento %d do Vetor: ", i);
        scanf("%d", &*(v2 + i));
    }
}

void imprimir(int *v1, int *v2, int tamV1, int tamV2){

    printf("\n\tValores do Vetor 1: ");

    for(int i = 0; i < tamV1; i++){

        printf("%d ", *(v1 + i));
    }

    printf("\n\tValores do Vetor 2: ");

    for(int i = 0; i < tamV2; i++){

        printf("%d ", *(v2 + i));
    }
}

int somarVetores(int *v1, int *v2, int *v3, int tamV1, int tamV2){

    if(tamV1 == tamV2){

        printf("\n\n\tSoma dos Vetores: ");

        for(int i = 0; i < tamV1; i++){

            *(v3 + i) = *(v1 + i) + *(v2 + i);

            printf("%d ", *(v3 + i));
        }

        printf("\n");

        return 1;
    }
    else{

        printf("\n\n\tVetores de Tamanho Diferentes!\n");

        return 0;
    }
}

int main(){

    int tamVet1, tamVet2;
    int vet1[10], vet2[10], vet3[10];

    lerValores(vet1, vet2, &tamVet1, &tamVet2);

    imprimir(vet1, vet2, tamVet1, tamVet2);

    printf("\n\tRETORNO: %d\n", somarVetores(vet1, vet2, vet3, tamVet1, tamVet2));

    return 0;
}
