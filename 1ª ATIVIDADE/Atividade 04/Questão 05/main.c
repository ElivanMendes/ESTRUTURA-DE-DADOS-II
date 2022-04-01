#include <stdio.h>
#include <stdlib.h>

void compararValores(int *num1, int *num2){

    int temp;

    if(*num2 > *num1){

        temp = *num2;

        *num2 = *num1;

        *num1 = temp;
    }
}

int main(){

    int num1, num2;

    printf("Digite o Primeiro Valor: ");
    scanf("%d", &num1);
    printf("Digite o Segundo Valor: ");
    scanf("%d", &num2);

    compararValores(&num1, &num2);

    printf("\n\tPrimeiro Valor: %d\n", num1);
    printf("\tSegundo Valor: %d\n", num2);

    return 0;
}
