#include <stdio.h>
#include <stdlib.h>

void lerValores(int *num1, int *num2){

    printf("Informe o Primeiro Valor: ");
    scanf("%d", &*num1);
    printf("Informe o Segundo Valor: ");
    scanf("%d", &*num2);
}

void imprimirResultados(int num1, int num2){

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int produto = num1 * num2;

    printf("\n\tSoma dos Valores: %d\n", soma);
    printf("\tSubtracao dos Valores: %d\n", subtracao);
    printf("\tProduto dos Valores: %d\n", produto);
}

int main(){

    int num1, num2;

    lerValores(&num1, &num2);

    printf("\n\tValor 1: %d\tValor 2: %d\n", num1, num2);

    imprimirResultados(num1, num2);

    return 0;
}
