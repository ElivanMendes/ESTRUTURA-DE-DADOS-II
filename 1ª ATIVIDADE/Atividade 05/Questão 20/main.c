#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct{

    char nome[25];
    char ingred[20];
    int quantIngred;

}Receita;

void lerReceita(Receita *r){

    printf("Nome: ");
    scanf("%24[^\n]", &r->nome);
    getchar();
    printf("Ingrediente: ");
    scanf("%19[^\n]", &r->ingred);
    printf("Quantidade: ");
    scanf("%d", &r->quantIngred);
    getchar();
}

void imprimirReceita(Receita r){

    printf("\n\tNome: %s\n", r.nome);
    printf("\tIngrediente: %s\n", r.ingred);
    printf("\tQuantidade: %d\n", r.quantIngred);
}

void cadastrarReceita(Receita **r){

    *r = malloc(MAX * sizeof(Receita));

    if(*r != NULL){

        for(int i = 0; i < MAX; i++){

            printf("\nReceita %d\n\n", i + 1);

            lerReceita(&(*r)[i]);
        }

    }
    else{

        printf("\n\tERRO ao Alocar Memoria!\n");
    }
}

void imprimirListaReceitas(Receita *r){

    printf("\n\t--------------- LISTA DE RECEITAS ---------------\n");

    for(int i = 0; i < MAX; i++){

        imprimirReceita(r[i]);
    }

    printf("\n\t-------------------------------------------------\n");
}

int main(){

    Receita *r;

    cadastrarReceita(&r);

    imprimirListaReceitas(r);

    return 0;
}
