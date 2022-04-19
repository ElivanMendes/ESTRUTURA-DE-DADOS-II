#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int hr, min, seg;

}Horario;

typedef struct {

    int dia, mes, ano;

}Data;

typedef struct {

    Horario h;
    Data d;
    char descricao[300];

}Compromisso;

void lerInformacoes(Compromisso *c){

    printf("Informe a Descricao do Compromisso: ");
    scanf("%299[^\n]", &c->descricao);
    printf("Informe a Data do Compromisso no Formato dd mm aaaa: ");
    scanf("%d %d %d", &c->d.dia, &c->d.mes, &c->d.ano);
    printf("Informe o Horario do Compromisso no Formato hr min sec: ");
    scanf("%d %d %d", &c->h.hr, &c->h.min, &c->h.seg);
}

void imprimirCompromisso(Compromisso c){

    printf("\n\tDescricao: %s\n", c.descricao);
    printf("\tData: %d/%d/%d\n", c.d.dia, c.d.mes, c.d.ano);
    printf("\tHorario: %d:%d:%d\n", c.h.hr, c.h.min, c.h.seg);
}

int main(){

    Compromisso c;

    lerInformacoes(&c);

    imprimirCompromisso(c);

    return 0;
}
