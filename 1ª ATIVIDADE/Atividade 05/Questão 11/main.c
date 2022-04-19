#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct{

    char nome[30];
    char matricula[20];
    float media;

}Aluno;

void imprimirAluno(Aluno a){

    printf("\n\tNome: %s\n", a.nome);
    printf("\tMatricula: %s\n", a.matricula);
    printf("\tMedia: %.2f\n", a.media);
}

void cadastrarAluno(Aluno **a){

    for(int i = 0; i < MAX; i++){

        Aluno *novo = malloc(sizeof(Aluno));

        printf("\nCADASTRA ALUNO %d\n\n", i + 1);

        printf("Nome: ");
        scanf("%29[^\n]", &novo->nome);
        getchar();
        printf("Matricula: ");
        scanf("%19[^\n]", &novo->matricula);
        getchar();
        printf("Media: ");
        scanf("%f", &novo->media);
        getchar();

        a[i] = novo;
    }
}

void verificarAlunos(Aluno **a, Aluno **alunosApr, Aluno **AlunosRep, int *quantApr, int *quantRep){

    int auxApr = 0, auxRep = 0;

    for(int i = 0; i < MAX; i++){

        if((*a[i]).media >= 5){

            Aluno *novo = malloc(sizeof(Aluno));

            novo = a[i];

            alunosApr[*quantApr] = novo;

            auxApr++;

            *quantApr = auxApr;
        }
        else{

            Aluno *novo = malloc(sizeof(Aluno));

            novo = a[i];

            AlunosRep[*quantRep] = novo;

            auxRep++;

            *quantRep = auxRep;
        }
    }
}

void imprimirListaAlunos(Aluno **alunosApr, Aluno **alunosRep, int quantApr, int quantRep){

    printf("\n\t--------------- ALUNOS APROVADOS ---------------\n");

    for(int i = 0; i < quantApr; i++){

        imprimirAluno(*alunosApr[i]);
    }

    if(quantApr == 0){

            printf("\n\t\tNENHUM ALUNO APROVADO!\n");
        }

    printf("\n\t------------------------------------------------\n");

    printf("\n\t-------------- ALUNOS REPROVADOS ---------------\n");

    for(int i = 0; i < quantRep; i++){

        imprimirAluno(*alunosRep[i]);
    }

    if(quantRep == 0){

            printf("\n\t\tNENHUM ALUNO REPROVADO!\n");
        }

    printf("\n\t------------------------------------------------\n");
}

int main(){

    Aluno *a[MAX], *alunosApr[MAX], *alunosRep[MAX];
    int quantApr = 0, quantRep = 0;

    cadastrarAluno(a);

    verificarAlunos(a, alunosApr, alunosRep, &quantApr, &quantRep);

    imprimirListaAlunos(alunosApr, alunosRep, quantApr, quantRep);

    return 0;
}
