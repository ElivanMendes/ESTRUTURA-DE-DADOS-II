#include <stdio.h>
#include <stdlib.h>

void lerNotas(float *n){

    for(int i = 0; i < 2; i++){

        printf("Digite a Nota %d: ", i + 1);
        scanf("%f", &n[i]);
    }
}

void medias(float *n, float *mediaA, float *mediaP){

    *mediaA = (n[0] + n[1]) / 2;

    *mediaP = (n[0] + (n[1] * 2)) / 3;
}

void imprimir(float *n, float mediaA, float mediaP){

    printf("\n\tNota 1: %.2f\n", n[0]);
    printf("\tNota 2: %.2f\n", n[1]);

    printf("\n\tMedia Aritimetica: %.2f\n", mediaA);
    printf("\tMedia Ponderada: %.2f\n", mediaP);
}

int main(){

    float notas[2], mediaA, mediaP;

    lerNotas(notas);

    medias(notas, &mediaA, &mediaP);

    imprimir(notas, mediaA, mediaP);

    return 0;
}
