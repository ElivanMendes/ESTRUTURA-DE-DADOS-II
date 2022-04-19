#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char nome[30];
    int matricula;
    int codDiscp;
    float notas[2];

}Aluno;

void lerAluno(Aluno *a){

    printf("Nome: ");
    scanf("%29[^\n]", &a->nome);
    printf("Numero da Matricula: ");
    scanf("%d", &a->matricula);
    printf("Codigo da Disciplina: ");
    scanf("%d", &a->codDiscp);

    for(int i = 0; i < 2; i++){

        do{

            printf("Nota %d: ", i + 1);
            scanf("%f", &a->notas[i]);
            getchar();

            if(a->notas[i] < 0 || a->notas[i] > 10){

                printf("\n\tInforme uma Nota Entre [0 e 10]!\n\n");
            }

        }while(a->notas[i] < 0 || a->notas[i] > 10);
    }
}

float mediaP(Aluno a){

    float media;

    media = (a.notas[0] + (a.notas[1] * 2)) / 3;

    return media;
}

void imprimirAluno(Aluno a){

    printf("\n\tNome: %s\n", a.nome);
    printf("\tMatricula: %d\n", a.matricula);
    printf("\tCodigo da Disciplina: %d\n", a.codDiscp);

    for(int i = 0; i < 2; i++){

        printf("\tNota %d: %.2f\n", i + 1, a.notas[i]);
    }

    printf("\tMedia Ponderada: %.2f\n", mediaP(a));
}

void lerQuantidade(int *quant){

    do{

        printf("Digite a Quantidade de Alunos para Cadastra: ");
        scanf("%d", &*quant);
        getchar();

        if(*quant < 1 || *quant > 10){

            printf("\n\tInforme uma Quantidade Minima de 1 e Maxima de 10!\n\n");
        }

    }while(*quant < 1 || *quant > 10);
}

void inserirNoVetor(Aluno **a, int quant){

    *a = malloc(quant * sizeof(Aluno));

    if(*a != NULL){

        for(int i = 0; i < quant; i++){

            printf("\n\tALUNO %d\n\n", i + 1);

            lerAluno(&(*a)[i]);
        }
    }
    else{

        printf("\n\tERRO AO ALOCAR MEMORIA!\n");
    }
}

void imprimirListaAlunos(Aluno *a, int quant){

    printf("\n\t-------------------- LISTA DE ALUNOS --------------------\n");

    for(int i = 0; i < quant; i++){

        imprimirAluno(a[i]);
    }

    printf("\n\t---------------------------------------------------------\n");
}

int main(){

    Aluno *a;
    int quant;

    lerQuantidade(&quant);

    inserirNoVetor(&a, quant);

    imprimirListaAlunos(a, quant);

    return 0;
}
