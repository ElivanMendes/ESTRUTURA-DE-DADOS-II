#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;

    printf("Digite o Primeiro Valor: ");
    scanf("%d", &num1);
    printf("Digite o Segundo Valor: ");
    scanf("%d", &num2);

    if(&num1 > &num2){

        printf("\n\tValor do Maior Endereco: %d\n", num1);
    }
    else{

        printf("\n\tValor do Maior Endereco: %d\n", num2);
    }

    return 0;
}
