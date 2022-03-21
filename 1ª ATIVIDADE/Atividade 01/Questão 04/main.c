#include <stdio.h>
#include <stdlib.h>

void lerPreco(float *preco){

    printf("Informe o Preco do Produto: ");
    scanf("%f", &*preco);
}

void imprimirPrecos(float preco){

    if(preco < 100){

        preco = preco + (preco / 100 * 10);

        printf("\n\tINFLACAO DE 10%%:\n");
        printf("\n\tPreco: %.2f\n", preco);
    }
    else{

        preco = preco + (preco / 100 * 20);

        printf("\n\tINFLACAO DE 20%%:\n");
        printf("\n\tPreco: %.2f\n", preco);
    }
}

int main(){

    float preco;

    lerPreco(&preco);

    imprimirPrecos(preco);

    return 0;
}
