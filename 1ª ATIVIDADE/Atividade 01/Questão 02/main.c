#include <stdio.h>
#include <stdlib.h>

void lerNumeros(int *num1, int *num2){

    printf("Digite o Primeiro Numero: ");
    scanf("%d", &*num1);
    printf("Digite o Segundo Numero: ");
    scanf("%d", &*num2);
}

void calcularNumeros(int num1, int num2){

    int soma = num1 + num2;
    int produto = num1 * (num2 * num2);
    int quadrado = num1 * num1;

    printf("\n\tSoma dos Numeros: %d\n", soma);
    printf("\n\tProduto do Primeiro Numero pelo Quadrado do Segundo: %d\n", produto);
    printf("\n\tQuadrado do Primeiro Numero: %d\n", quadrado);
}

int main(){

    int numero1, numero2;

    lerNumeros(&numero1, &numero2);

    calcularNumeros(numero1, numero2);

    return 0;
}
