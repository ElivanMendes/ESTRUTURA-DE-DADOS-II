#include <stdio.h>
#include <stdlib.h>

void lerValores(float *m){

    printf("Digite o Valor em (m): ");
    scanf("%f", &*m);
}

void conversaoDeMetros(float m, float *dm, float *cm, float *mm){

    *dm = m * 10;
    *cm = m * 100;
    *mm = m * 1000;
}

void imprimir(float m, float *dm, float *cm, float *mm){

    conversaoDeMetros(m, &*dm, &*cm, &*mm);

    printf("\n\tCONVERSAO:\n");
    printf("\n\t%.2f m = %.2f dm\n", m, *dm);
    printf("\n\t%.2f m = %.2f cm\n", m, *cm);
    printf("\n\t%.2f m = %.2f mm\n", m, *mm);
}

int main(){

    float metros, decimetros, centimetros, milimetros;

    lerValores(&metros);

    imprimir(metros, &decimetros, &centimetros, &milimetros);

    return 0;
}
