#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char nome[30];
    int matricula;
    char curso[30];

}Aluno;

void lerAluno(Aluno *a){

    printf("Nome: ");
    scanf("%29[^\n]", &a->nome);
    printf("Numero da Matricula: ");
    scanf("%d", &a->matricula);
    getchar();
    printf("Curso: ");
    scanf("%29[^\n]", &a->curso);
    getchar();
}

void imprimirAluno(Aluno a){

    printf("\n\tNome: %s\n", a.nome);
    printf("\tNumero da Matricula: %d\n", a.matricula);
    printf("\tCurso: %s\n", a.curso);
}

void inserirNoVetor(Aluno *a){

    for(int i = 0; i < 5; i++){

        printf("\nDADOS ALUNO %d:\n\n", i + 1);

        lerAluno(&a[i]);
    }
}

void imprimirListaAlunos(Aluno *a){

    printf("\n\t-------------------- LISTA ALUNOS --------------------\n");

    for(int i = 0; i < 5; i++){

        imprimirAluno(a[i]);
    }

    printf("\n\t------------------------------------------------------\n");
}

int main(){

    Aluno a[5];

    inserirNoVetor(a);

    imprimirListaAlunos(a);

    return 0;
}
