#include <stdio.h>
#include <stdlib.h>

void lerValores(int *base, int *exp){

    printf("Digite a Base: ");
    scanf("%d", &*base);

    do{

        printf("Digite o Expoente: ");
        scanf("%d", &*exp);

        if(*exp < 1){
            printf("\n\tDigite um Expoente Maior ou Igual a 1!\n\n");
        }

    }while(*exp < 1);
}

int potencia(int base, int exp){

    int i, aux = 1;

    while(i < exp){

        aux = aux * base;

        i++;
    }

    return aux;
}

void imprimirPotencia(int base, int exp){

    printf("\n\t%d Elevado a %d e Igual a: %d\n", base, exp, potencia(base, exp));
}

int main(){

    int base, expoente;

    lerValores(&base, &expoente);

    imprimirPotencia(base, expoente);

    return 0;
}
