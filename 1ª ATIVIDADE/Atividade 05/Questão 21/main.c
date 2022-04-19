#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

typedef struct{

    char nome[20];
    char filme[20];
    int quantFilmes;

}Diretor;

void lerDiretor(Diretor *d){

    printf("Nome: ");
    scanf("%19[^\n]", &d->nome);
    getchar();
    printf("Filme: ");
    scanf("%19[^\n]", &d->filme);
    printf("Quantidade: ");
    scanf("%d", &d->quantFilmes);
    getchar();
}

void imprimirDiretor(Diretor d){

    printf("\n\tNome: %s\n", d.nome);
    printf("\tFilme: %s\n", d.filme);
    printf("\tQuantidade: %d\n", d.quantFilmes);
}

void cadastrarDiretores(Diretor **d){

    *d = malloc(MAX * sizeof(Diretor));

    if(*d != NULL){

        for(int i = 0; i < MAX; i++){

            printf("\nDiretor %d\n\n", i + 1);

            lerDiretor(&(*d)[i]);
        }

    }
    else{

        printf("\n\tERRO ao Alocar Memoria!\n");
    }
}

void imprimirListaDiretores(Diretor *d){

    printf("\n\t--------------- LISTA DE DIRETORES ---------------\n");

    for(int i = 0; i < MAX; i++){

        imprimirDiretor(d[i]);
    }

    printf("\n\t-------------------------------------------------\n");
}

void procurarDiretor(Diretor *d, char nomeDiretor[]){

    int cont = 0;

    for(int i = 0; i < MAX; i++){

        if(strcmp(d[i].nome, nomeDiretor) == 0){

            printf("\n\tFilme Produzido: %s\n", d[i].filme);

            cont++;
        }
    }

    if(cont == 0){

        printf("\n\tDiretor Nao Encontrado!\n");
    }
}

int main(){

    Diretor *d;
    char nomeDiretor[20];

    cadastrarDiretores(&d);

    imprimirListaDiretores(d);

    printf("\nInforme o Nome do Diretor Procurado: ");
    scanf("%19[^\n]", &nomeDiretor);

    procurarDiretor(d, nomeDiretor);

    return 0;
}
