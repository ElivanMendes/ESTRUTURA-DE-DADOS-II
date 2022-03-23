#include <stdio.h>
#include <stdlib.h>

void lerNumeros(int *v){

    for(int i = 0; i < 5; i++){

        do{

            printf("Digite o Numero %d: ", i + 1);
            scanf("%d", &v[i]);

            if(v[i] < 0){
                printf("\n\tDigite um Numero Positivo!\n\n");
            }

        }while(v[i] < 0);
    }
}

int somaDivisores(int num){

    int aux = 1, soma = 0;

    printf("\tDivisores de %d: ", num);

    while(aux < num){

        if(num % aux == 0){

            soma = soma + aux;

            printf("%d ", aux);
        }

        aux++;
    }

    return soma;
}

void imprimirSomaDivisores(int vet[]){

    for(int i = 0; i < 5; i++){

        printf("\n");

        printf("Soma dos Divisores: %d\n", somaDivisores(vet[i]));
    }
}

int main(){

    int vet[5];

    lerNumeros(vet);

    imprimirSomaDivisores(vet);

    return 0;
}
