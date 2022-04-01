#include <stdio.h>
#include <stdlib.h>

void somaDosNumeros(int *a, int *b){

    int soma;

    soma = *a + *b;

    *a = soma;
}

int main(){

    int a, b;

    printf("Digite o Valor de A: ");
    scanf("%d", &a);
    printf("Digite o Valor de B: ");
    scanf("%d", &b);

    somaDosNumeros(&a, &b);

    printf("\n\tValor de A: %d\n", a);
    printf("\tValor de B: %d\n", b);

    return 0;
}
