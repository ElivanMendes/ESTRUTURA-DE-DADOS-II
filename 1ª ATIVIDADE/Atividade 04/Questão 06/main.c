#include <stdio.h>
#include <stdlib.h>

void somaDoDobro(int *a, int *b){

    int dobroA, dobroB;

    dobroA = *a * 2;
    dobroB = *b * 2;

    *a = dobroA;
    *b = dobroB;
}

int main(){

    int a, b;

    printf("Digite o Valor de A: ");
    scanf("%d", &a);
    printf("Digite o Valor de B: ");
    scanf("%d", &b);

    printf("\n\tValor de A: %d\n", a);
    printf("\tValor de B: %d\n", b);

    somaDoDobro(&a, &b);

    printf("\n\tDobro de A: %d\n", a);
    printf("\tDobro de B: %d\n", b);

    return 0;
}
