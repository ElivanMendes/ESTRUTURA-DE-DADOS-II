#include <stdio.h>
#include <stdlib.h>

int main(){

    int *num1, num2 = 10;
    float *num3, num4 = 5.5;
    char *letra1, letra2 = 'A';

    printf("\n\tANTES:\n");
    printf("\tNumero Inteiro: %d\n", num2);
    printf("\tNumero Real: %.2f\n", num4);
    printf("\tCaracter: %c\n", letra2);

    num1 = &num2;
    num3 = &num4;
    letra1 = &letra2;

    *num1 = 5;
    *num3 = 2.25;
    *letra1 = 'B';

    printf("\n\tDEPOIS:\n");
    printf("\tNumero Inteiro: %d\n", num2);
    printf("\tNumero Real: %.2f\n", num4);
    printf("\tCaracter: %c\n", letra2);

    return 0;
}
