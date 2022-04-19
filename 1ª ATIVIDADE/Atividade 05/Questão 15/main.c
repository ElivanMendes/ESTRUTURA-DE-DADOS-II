#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char titulo[30];
    char autor[20];
    int ano;

}Livro;

void imprimir(Livro l){

    printf("\n\tTitulo: %s\n", l.titulo);
    printf("\tAutor: %s\n", l.autor);
    printf("\tAno: %d\n", l.ano);
}

void buscarLivros(Livro *l, char *titulo){

    for(int i = 0; i < 5; i++){

        if(strcmp(l[i].titulo, titulo) == 0){

            imprimir(l[i]);
        }
    }
}

int main(){

    char titulo[30];
    Livro l[5] = {"Edipo Rei", "Sofocles", 427,
                  "O Vermelho e o Negro", "Stendhal", 1830,
                  "Martin Fierro", "Jose Hernandez", 1872,
                  "Os Irmaos Karamazov", "Fiodor Dostoievski", 1879,
                  "Dom Casmurro", "Machado de Assis", 1899};

    printf("\nDigite o Titulo do Livro Buscado: ");
    scanf("%29[^\n]", &titulo);

    buscarLivros(l, titulo);

    return 0;
}
