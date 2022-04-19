#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct{

    int codigo;
    int quantDeVoosSaem;
    int quantDeVoosChegam;

}Aeroportos;

void lerAeroportos(Aeroportos *a){

    printf("Codigo: ");
    scanf("%d", &a->codigo);
    printf("Quantidade de Voos que Saem: ");
    scanf("%d", &a->quantDeVoosSaem);
    printf("Quantidade de Voos que Chegam: ");
    scanf("%d", &a->quantDeVoosChegam);
}

void imprimir(Aeroportos a){

    printf("\n\tCodigo: %d\n", a.codigo);
    printf("\tQuantidade de Voos que Saem: %d\n", a.quantDeVoosSaem);
    printf("\tQuantidade de Voos que Chegam: %d\n", a.quantDeVoosChegam);
}

void cadastrarVoos(Aeroportos **a){

    *a = malloc(MAX * sizeof(Aeroportos));

    if(*a != NULL){

        for(int i = 0; i < MAX; i++){

            printf("\nCADASTRAR VOO %d\n\n", i + 1);

            lerAeroportos(&(*a)[i]);
        }
    }
    else{

        printf("\n\tERRO ao Alocar Memoria!\n");
    }
}

void imprimirLista(Aeroportos *a){

    printf("\n\t--------------- LISTA AEROPORTOS ---------------\n");

    for(int i = 0; i < MAX; i++){

        imprimir(a[i]);
    }

    printf("\n\t------------------------------------------------\n");
}

int main(){

    Aeroportos *a;

    cadastrarVoos(&a);

    imprimirLista(a);

    return 0;
}
