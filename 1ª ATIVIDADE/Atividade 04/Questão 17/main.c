#include <stdio.h>
#include <stdlib.h>

void lerNumero(float *num){

    printf("Digite um Numero: ");
    scanf("%f", &*num);
}

void imprimir(int inteiro, float frac){

    printf("\n\tParte Inteira: %d\n", inteiro);
    printf("\n\tParte Fracionada: %.2f\n", frac);
}

void fracc(float num, int *inteiro, float *frac){

    *inteiro = 1 * num;

    *frac = num - *inteiro;
}

int main(){

    float num, frac;
    int inteiro;

    lerNumero(&num);

    fracc(num, &inteiro, &frac);

    imprimir(inteiro, frac);

    return 0;
}
