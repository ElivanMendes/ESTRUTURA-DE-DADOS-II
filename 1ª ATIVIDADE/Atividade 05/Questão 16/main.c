#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int dia, mes, ano;

}Data;

typedef struct{

    char compromisso[60];
    Data data;

}Agenda;

void imprimir(Agenda a){

    printf("\n\tCompromisso: %s\n", a.compromisso);
    printf("\tData: %2d/%2d/%4d\n", a.data.dia, a.data.mes, a.data.ano);
}

void buscarCompromissos(Agenda *a, int mes, int ano){

    int cont = 0;

    for(int i = 0; i < 5; i++){

        if(a[i].data.mes == mes && a[i].data.ano == ano){

            imprimir(a[i]);

            cont++;
        }
    }

    if(cont == 0){

        printf("\n\tNenhum Compromisso Encontrado!\n");
    }
}

int main(){

    int mes, ano;
    Agenda a[5] = {"Aniversario", 10, 05, 2022,
                   "Pagar Contas", 30, 06, 2022,
                   "Cha de Bebe", 15, 8, 2022,
                   "Academia", 01, 05, 2022,
                   "Festa da Ana", 15, 5, 2022};

    do{

        printf("\nDigite o Mes e o Ano do Compromisso: ");
        scanf("%d%d", &mes, &ano);

        if(mes == 0){

            break;
        }

        buscarCompromissos(a, mes, ano);

    }while(mes != 0);

    return 0;
}
