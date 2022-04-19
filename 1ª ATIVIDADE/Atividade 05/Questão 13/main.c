#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char nome[30];
    char endereco[30];
    int dia, mes, ano;
    char cidade[20];
    char cep[20];
    char email[30];

}Pessoa;

void lerPessoa(Pessoa *p){

    printf("Nome: ");
    scanf("%29[^\n]", &p->nome);
    printf("Data de Nascimento dd mm aaaa: ");
    scanf("%d%d%d", &p->dia, &p->mes, &p->ano);
    getchar();
    printf("Endereco: ");
    scanf("%29[^\n]", &p->endereco);
    getchar();
    printf("Cidade: ");
    scanf("%19[^\n]", &p->cidade);
    getchar();
    printf("CEP: ");
    scanf("%19[^\n]", &p->cep);
    getchar();
    printf("Email: ");
    scanf("%29[^\n]", &p->email);
}

void imprimir(Pessoa p){

    printf("\n\tNome: %s\n", p.nome);
    printf("\tData de Nascimento: %2d/%2d/%4d\n", p.dia, p.mes, p.ano);
    printf("\tEndereco: %s\n", p.endereco);
    printf("\tCidade: %s\n", p.cidade);
    printf("\tCEP: %s\n", p.cep);
    printf("\tEmail: %s\n", p.email);
}

int main(){

    Pessoa p;

    lerPessoa(&p);

    imprimir(p);

    return 0;
}
