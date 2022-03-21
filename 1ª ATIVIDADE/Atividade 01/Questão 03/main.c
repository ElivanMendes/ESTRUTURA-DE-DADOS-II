#include <stdio.h>
#include <stdlib.h>

void lerValores(int *v1, int *v2){

    printf("Digite o Primeiro Valor: ");
    scanf("%d", &*v1);
    printf("Digite o Segundo Valor: ");
    scanf("%d", &*v2);
}

void imprimirValores(int v1, int v2){

    if(v1 < v2){

        printf("\n\tValores: %d, %d\n", v1, v2);
    }
    else if(v1 > v2){

        printf("\n\tValores: %d, %d\n", v1, v2);
    }
    else{

        printf("\n\tValores Iguais\n");
    }
}

int main(){

    int valor1, valor2;

    lerValores(&valor1, &valor2);

    imprimirValores(valor1, valor2);

    return 0;
}
