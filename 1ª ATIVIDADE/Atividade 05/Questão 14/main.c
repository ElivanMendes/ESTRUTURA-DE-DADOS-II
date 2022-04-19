#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char marca[15];
    int ano;
    float preco;

}Carro;

void imprimir(Carro c){

    printf("\n\tMarca: %s\n", c.marca);
    printf("\tAno: %d\n", c.ano);
    printf("\tPreco: %.2f\n", c.preco);
}

void lerPreco(float *p){

    printf("\nDigite o Preco: ");
    scanf("%f", &*p);
}

void imprimirCarros(Carro *c, float p){

    int cont = 0;

    printf("\n\t---------- CARROS ----------\n");

    for(int i = 0; i < 5; i++){

        if(c[i].preco <= p){

            imprimir(c[i]);

            cont++;
        }
    }

    if(cont == 0){

        printf("\n\tNENHUM CARRO ENCONTRADO!\n");
    }

    printf("\n\t----------------------------\n");
}

int main(){

    float preco;

    Carro c[5] = {"Gol", 2022, 73053.4,
                  "Golf GTI", 2022, 155000.0,
                  "Land Rover", 2021, 383950.0,
                  "Corolla", 2021, 137390.0,
                  "Honda Civic", 2021, 112700.0};

    do{

        lerPreco(&preco);

        if(preco == 0){

            break;
        }

        imprimirCarros(c, preco);

    }while(preco != 0);

    return 0;
}
