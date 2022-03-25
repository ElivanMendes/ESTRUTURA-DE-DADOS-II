#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char nome[81];
    char matricula [8];
    char turma;
    float p1;
    float p2;
    float p3;

}Aluno;

Aluno cadastrarAluno(){

    Aluno a;

    printf("Nome: ");
    scanf("%80[^\n]", &a.nome);
    getchar();
    printf("Matricula: ");
    scanf("%7[^\n]", &a.matricula);
    getchar();
    printf("Turma: ");
    scanf("%c", &a.turma);

    do{
        printf("Nota 1: ");
        scanf("%f", &a.p1);

        if(a.p1 < 0 || a.p1 > 10){
            printf("\n\tDigite uma Nota entre [0 e 10]!\n\n");
        }

    }while(a.p1 < 0 || a.p1 > 10);

    do{
        printf("Nota 2: ");
        scanf("%f", &a.p2);

        if(a.p2 < 0 || a.p2 > 10){
            printf("\n\tDigite uma Nota entre [0 e 10]!\n\n");
        }

    }while(a.p2 < 0 || a.p2 > 10);

    do{
        printf("Nota 3: ");
        scanf("%f", &a.p3);
        getchar();

        if(a.p3 < 0 || a.p3 > 10){
            printf("\n\tDigite uma Nota entre [0 e 10]!\n\n");
        }

    }while(a.p3 < 0 || a.p3 > 10);

    return a;
}

float media(Aluno a){

    float media = (a.p1 + a.p2 + a.p3) / 3;

    return media;
}

void imprimirAlunoAprovado(Aluno a){

    printf("\n\tNome: %s\n", a.nome);
    printf("\tMatricula: %s\n", a.matricula);
    printf("\tTurma: %c\n", a.turma);
    printf("\tMedia: %.2f\n", media(a));
}

void imprimirAprovados(Aluno **a, int quant){

    Aluno *aux = *a;
    int cont = 0;

    printf("\n\t---------- ALUNOS APROVADOS ----------\n");

    for(int i = 0; i < quant; i++){

        if(media(aux[i]) >= 7){

        imprimirAlunoAprovado(aux[i]);

        cont++;
        }
    }

    if(cont == 0){

        printf("\n\t\tNENHUM ALUNO APROVADO!\n");
    }

    printf("\n\t--------------------------------------\n", cont);
}

void lerTurmaInformada(char *turma){

    printf("\nInforme a Turma que Deseja Saber as Medias: ");
    scanf("%c", &*turma);
}

void imprimirAlunoTurma(Aluno a){

    printf("\n\tNome: %s\n", a.nome);
    printf("\tMedia: %.2f\n", media(a));
}

void imprimirMediaTurma(Aluno **a, int quant, char turma){

    Aluno *aux = *a;
    int cont = 0;

    printf("\n\t----- MEDIA DOS ALUNOS DA TURMA %c ----\n", turma);

    for(int i = 0; i < quant; i++){

        if(aux[i].turma == turma){

            imprimirAlunoTurma(aux[i]);

            cont++;
        }
    }

    if(cont == 0){

        printf("\n\t\tTURMA NAO EXISTE!\n");
    }

    printf("\n\t--------------------------------------\n");
}

int main(){

    Aluno *a;
    int quant;
    char turma;

    printf("Quantos Alunos Deseja Cadastra: ");
    scanf("%d", &quant);
    getchar();

    a = malloc(quant * sizeof(Aluno));

    if(a != NULL){

        for(int i = 0; i < quant; i++){

            printf("\nCADASTRAR ALUNO %d:\n\n", i + 1);

            a[i] = cadastrarAluno();
        }
    }
    else{

        printf("\n\tERRO AO ALOCAR MEMORIA!\n");
    }

    imprimirAprovados(&a, quant);

    lerTurmaInformada(&turma);

    imprimirMediaTurma(&a, quant, turma);

    return 0;
}
