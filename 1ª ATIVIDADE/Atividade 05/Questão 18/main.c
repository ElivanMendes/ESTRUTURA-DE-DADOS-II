#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct{

    char nome[15];
    int codigo;
    float preco;
    int quantidade;

}Produto;

void cadastrarProduto(Produto **p){

    for(int i = 0; i < MAX; i++){

        Produto *novo = malloc(sizeof(Produto));

        printf("\nCADASTRA PRODUTO %d\n\n", i + 1);

        printf("Nome: ");
        scanf("%14[^\n]", &novo->nome);
        printf("Preco: ");
        scanf("%f", &novo->preco);
        printf("Quantidade: ");
        scanf("%d", &novo->quantidade);
        getchar();

        novo->codigo = (i + 1);

        p[i] = novo;
    }
}

void imprimirProduto(Produto p){

    printf("\n\tCodigo: %d\n", p.codigo);
    printf("\tNome: %s\n", p.nome);
    printf("\tPreco: %.2f\n", p.preco);
    printf("\tQuantidade: %d\n", p.quantidade);
}

void imprimirListaProdutos(Produto **p){

    printf("\n\t--------------- LISTA DE PRODUTOS ---------------\n");

    for(int i = 0; i < MAX; i++){

        imprimirProduto(*p[i]);
    }

    printf("\n\t-------------------------------------------------\n");
}

void lerPedido(int *cod, int *quant){

    do{

        printf("\nInforme o Codigo do Produto Desejado: ");
        scanf("%d", &*cod);

        if(*cod < 0 || *cod > MAX){

            printf("\n\tCodigo Invalido!\n");
        }

    }while(*cod < 0 || *cod > MAX);

    do{

        printf("Informe a Quantidade do Produto Desejado: ");
        scanf("%d", &*quant);

        if(*quant < 1){

            printf("\n\tInforme uma Quantidade Valida!\n\n");
        }

    }while(*quant < 1);
}

void verificarEstoque(Produto **p, int cod, int quant){

    for(int i = 0; i < MAX; i++){

        if((*p[i]).codigo == cod && (*p[i]).quantidade < quant){

            printf("\n\n\tESTOQUE INSUFICIENTE PARA REALIZAR O PEDIDO!\n\n");
        }

        if((*p[i]).codigo == cod && (*p[i]).quantidade >= quant && quant > 0){

            (*p[i]).quantidade -= quant;

            printf("\n\n\tPEDIDO REALIZADO COM SUCESSO!\n\n");
        }
    }
}

int main(){

    int cod, quant;

    Produto *prod[MAX];

    cadastrarProduto(prod);

    do{

        imprimirListaProdutos(prod);

        lerPedido(&cod, &quant);

        verificarEstoque(prod, cod, quant);

    }while(cod != 0);

    return 0;
}
