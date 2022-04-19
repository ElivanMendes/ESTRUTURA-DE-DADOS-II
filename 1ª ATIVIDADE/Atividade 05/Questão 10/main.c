#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

typedef struct{

    char nome[30];
    char endereco[50];
    char telefone[20];

}Pessoas;

void lerPessoa(Pessoas *p){

    printf("Nome: ");
    scanf("%29[^\n]", &p->nome);
    getchar();
    printf("Endereco: ");
    scanf("%49[^\n]", &p->endereco);
    getchar();
    printf("Telefone: ");
    scanf("%19[^\n]", &p->telefone);
    getchar();
}

void imprimirPessoa(Pessoas p){

    printf("\n\tNome: %s\n", p.nome);
    printf("\tEndereco: %s\n", p.endereco);
    printf("\tTelefone: %s\n", p.telefone);
}

void inserirNoVetor(Pessoas **p){

    *p = malloc(MAX * sizeof(Pessoas));

    if(*p != NULL){

        for(int i = 0; i < MAX; i++){

            printf("\nINFORMACOES PESSOA %d:\n\n", i + 1);

            lerPessoa(&(*p)[i]);
        }
    }
    else{

        printf("\n\tERRO ao Alocar Memoria!\n");
    }
}

void imprimirListaPessoa(Pessoas *p){

    printf("\n\t--------------- LISTA DE PESSOAS ---------------\n");

    for(int i = 0; i < MAX; i++){

        imprimirPessoa(p[i]);
    }

    printf("\n\t------------------------------------------------\n");
}

void trocar(Pessoas *a, Pessoas *b){

    Pessoas aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void ordenar(Pessoas *p){

    for(int i = 0; i < MAX; i++){
        for(int j = i + 1; j < MAX; j++){

            if(strcmp(p[i].nome, p[j].nome) > 0){

                trocar(&p[i], &p[j]);
            }
        }
    }
}

int main(){

    Pessoas *p;

    inserirNoVetor(&p);

    ordenar(p);

    imprimirListaPessoa(p);

    return 0;
}
