#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct{

    char nome[15];
    float potencia;
    float tempo;

}Eletrodomesticos;

static Eletrodomesticos e[MAX];

void lerInfor(Eletrodomesticos *e);
void imprimirInfor(Eletrodomesticos e);
void inserirNoVetor();
float consumoEletro(Eletrodomesticos e);
float consumoTotal();
void consumoRelativoEletro();

int main(){

    inserirNoVetor();

    printf("\n\tConsumo Total da Casa: %.2f kW\n", consumoTotal());

    consumoRelativoEletro();

    return 0;
}

void lerInfor(Eletrodomesticos *e){

    printf("Nome: ");
    scanf("%14[^\n]", &e->nome);
    printf("Potencia: ");
    scanf("%f", &e->potencia);
    printf("Tempo Ativo em Horas por Dia: ");
    scanf("%f", &e->tempo);
    getchar();
}

void imprimirInfor(Eletrodomesticos e){

    printf("\n\tNome: %s\n", e.nome);
    printf("\tPotencia: %.2f\n", e.potencia);
    printf("\tTempo Ativo: %.2f\n", e.tempo);
}

void inserirNoVetor(){

    for(int i = 0; i < MAX; i++){

        printf("\nEletrodomestico %d\n\n", i + 1);

        lerInfor(&e[i]);
    }
}

float consumoEletro(Eletrodomesticos e){

    float consumo;

    consumo = (e.potencia * e.tempo) / 1000.0;

    return consumo;
}

float consumoTotal(){

    float consumoTotal = 0;

    for(int i = 0; i < MAX; i++){

        consumoTotal += consumoEletro(e[i]);
    }

    return consumoTotal;
}

void consumoRelativoEletro(){

    for(int i = 0; i < MAX; i++){

        float consRelativo = (consumoEletro(e[i]) * 100) / consumoTotal();

        printf("\n\tNome: %s\n\tPorcentagem do Consumo da Casa: %.2f%%\n", e[i].nome, consRelativo);
    }
}
