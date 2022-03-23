#include <stdio.h>
#include <stdlib.h>

void lerValores(int *v){

    for(int i = 0; i < 5; i++){
        printf("Digite o Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

int valorAbsoluto(int num){

    if(num < 0){

        return num * -1;
    }

    return num;
}

void imprimirValorAbsoluto(int vet[]){

    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("\tValor Absoluto de %d: %d\n", vet[i], valorAbsoluto(vet[i]));
    }
}

int main(){

    int vet[5];

    lerValores(&vet);

    imprimirValorAbsoluto(vet);

    return 0;
}
