#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char nome[100];
    int idade;
    char endereco[100];

}Dados;

void lerDados(Dados *d){

    printf("Nome: ");
    scanf("%99[^\n]", &d->nome);
    printf("Idade: ");
    scanf("%d", &d->idade);
    getchar();
    printf("Endereco: ");
    scanf("%99[^\n]", &d->endereco);
}

void imprimirDados(Dados d){

    printf("\n\tNome: %s\n", d.nome);
    printf("\tIdade: %d\n", d.idade);
    printf("\tEndereco: %s\n", d.endereco);
}

int main(){

    Dados d;

    lerDados(&d);

    imprimirDados(d);

    return 0;
}
