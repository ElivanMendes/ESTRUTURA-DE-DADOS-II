#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lerNumeros(float *x1, float *x2, float *y1, float *y2){

    printf("Digite as Cordenadas X e Y do Ponto 1: ");
    scanf("%f %f", &*x1, &*y1);
    printf("Digite as Cordenadas X e Y do Ponto 2: ");
    scanf("%f %f", &*x2, &*y2);
}

float distancia(float x1, float x2, float y1, float y2){

    float d1, d2, somaQdr, resultado;

    d1 = x1 - x2;
    d2 = y1 - y2;
    somaQdr = (d1 * d1) + (d2 * d2);
    resultado = sqrt(somaQdr);

    return resultado;
}

void imprimirResultado(float x1, float x2, float y1, float y2){

    printf("\n\tA Distancia entre os Pontos e: %.2f\n", distancia(x1, x2, y1, y2));
}

int main(){

    float x1, y1, x2, y2;

    lerNumeros(&x1, &x2, &y1, &y2);

    imprimirResultado(x1, x2, y1, y2);

    return 0;
}
