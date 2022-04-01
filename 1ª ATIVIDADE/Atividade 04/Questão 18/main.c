#include <stdio.h>
#include <stdlib.h>

void lerDados(float *r){

    printf("Digite o Raio da Esfera: ");
    scanf("%f", &*r);
}

void calc_Esfera(float r, float *area, float *volume){

    *area = 4.0 * 3.14 * (r * r);

    *volume = (4.0 / 3.0) * 3.14 * ((r * r) * r);
}

void imprimir(float area, float volume){

    printf("\n\tAREA DA SUPERFICIE DA ESFERA: %.2f\n", area);
    printf("\n\tVOLUME DA ESFERA: %.2f\n", volume);
}

int main(){

    float r, area, volume;

    lerDados(&r);

    calc_Esfera(r, &area, &volume);

    imprimir(area, volume);

    return 0;
}
