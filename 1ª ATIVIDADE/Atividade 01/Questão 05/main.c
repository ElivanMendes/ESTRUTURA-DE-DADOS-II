#include <stdio.h>
#include <stdlib.h>

void calcularMedia(float *n1, float *n2){

    do{

    do{

    printf("Digite a Primeira Nota: ");
    scanf("%f", &*n1);

    if(*n1 == 50){

        printf("\n\tSAINDO...\n");

        break;
    }

    if(*n1 < 0 || *n1 > 10){
        printf("\n\tInforme a Primeira Nota entre [0 a 10]\n\n");
    }

    }while(*n1 < 0 || *n1 > 10);

    if(*n1 == 50){
        break;
    }

    do{

    printf("Digite a Segunda Nota: ");
    scanf("%f", &*n2);

    if(*n2 < 0 || *n2 > 10){
        printf("\n\tInforme a Segunda Nota entre [0 a 10]\n\n");
    }

    }while(*n2 < 0 || *n2 > 10);

    printf("\n\tNota 1: %.2f\n\tNota 2: %.2f\n", *n1, *n2);
    printf("\n\tMedia: %.2f\n\n", (*n1 + *n2) / 2);

    }while(*n1 != 50);
}

int main(){

    float nota1, nota2;

    calcularMedia(&nota1, &nota2);

    return 0;
}
