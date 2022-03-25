#include <stdio.h>
#include <stdlib.h>

typedef struct {

    float x1, y1, x2, y2;

}Pontos;

void lerPontos(Pontos *p){

    printf("Digite as Cordenadas X e Y do Ponto 1: ");
    scanf("%f %f", &p->x1, &p->y1);
    printf("Digite as Cordenadas X e Y do Ponto 2: ");
    scanf("%f %f", &p->x2, &p->y2);
}

float distancia(Pontos p){

    float d1, d2, somaQdr, resultado;

    d1 = p.x1 - p.x2;
    d2 = p.y1 - p.y2;
    somaQdr = (d1 * d1) + (d2 * d2);
    resultado = sqrt(somaQdr);

    return resultado;
}

void imprimirResultado(Pontos p){

    printf("\n\tA Distancia entre os Pontos e: %.2f\n", distancia(p));
}

int main(){

    Pontos p;

    lerPontos(&p);

    imprimirResultado(p);

    return 0;
}
