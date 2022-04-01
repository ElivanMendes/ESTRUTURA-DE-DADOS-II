#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;

    printf("\n\tEndereco de A: %p\n", &a);
    printf("\tEndereco de B: %p\n", &b);

    if(&a > &b){

        printf("\n\tMaior Endereco Variavel A: %p\n", &a);
    }
    else{

        printf("\n\tMaior Endereco Variavel B: %p\n", &b);
    }

    return 0;
}
