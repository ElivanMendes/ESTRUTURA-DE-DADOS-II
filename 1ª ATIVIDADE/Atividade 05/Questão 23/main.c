#include <stdio.h>
#include <stdlib.h>

#define MAX 2

typedef struct{

    int dia, mes, ano;

}DMA;

void lerInfo(DMA *dma){

    do{

        printf("Dia: ");
        scanf("%d", &dma->dia);

        if(dma->dia < 1 || dma->dia > 30){

            printf("\n\tInforme um Dia Entre [1 a 30]!\n\n");
        }

    }while(dma->dia < 1 || dma->dia > 30);

    do{

        printf("Mes: ");
        scanf("%d", &dma->mes);

        if(dma->mes < 1 || dma->mes > 12){

            printf("\n\tInforme um Mes Entre [1 a 12]!\n\n");
        }

    }while(dma->mes < 1 || dma->mes > 12);

    do{

        printf("Ano: ");
        scanf("%d", &dma->ano);

        if(dma->ano < 0){

            printf("\n\tInforme um Ano Valido!\n\n");
        }

    }while(dma->ano < 0);
}

void imprimirInfo(DMA dma){

    printf("\n\tDia: %d\n", dma.dia);
    printf("\tMes: %d\n", dma.mes);
    printf("\tAno: %d\n", dma.ano);
}

void cadastrarData(DMA **dma){

    *dma = malloc(MAX * sizeof(DMA));

    if(*dma != NULL){

        for(int i = 0; i < MAX; i++){

            printf("\nDATA %d\n\n", i + 1);

            lerInfo(&(*dma)[i]);
        }
    }
    else{

        printf("\n\tERRO ao Alocar Memoria!\n");
    }
}

int* calcularDias(DMA *dma){

    static int data[] = {0, 0, 0};

    int dias = dma[0].dia - dma[1].dia;

    if(dias < 0){

        dias *= (-1);
    }

    int diasMes = (dma[0].mes - dma[1].mes) * 30;

    if(diasMes < 0){

        diasMes *= (-1);
    }

    int diasAno = (dma[0].ano - dma[1].ano) * 365;

    if(diasAno < 0){

        diasAno *= (-1);
    }

    data[0] = dias;
    data[1] = diasMes;
    data[2] = diasAno;

    return data;
}

int main(){

    DMA *dma;

    cadastrarData(&dma);

    imprimirInfo(dma[0]);
    imprimirInfo(dma[1]);

    int *vet = calcularDias(dma);

    printf("\n\tDiferenca Dias: %d\n", vet[0]);
    printf("\n\tDiferenca DiasMes: %d\n", vet[1]);
    printf("\n\tDiferenca DiasAno: %d\n", vet[2]);

    printf("\n\tDias que Decorrem Entre as Datas: %d\n", vet[0] + vet[1] + vet[2]);

    return 0;
}
