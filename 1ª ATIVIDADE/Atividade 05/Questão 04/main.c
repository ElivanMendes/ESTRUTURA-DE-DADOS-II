#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char nome[30];
    int matricula;
    float notas[3];

}Aluno;

void lerAluno(Aluno *a){

    printf("Nome: ");
    scanf("%29[^\n]", &a->nome);
    printf("Numero da Matricula: ");
    scanf("%d", &a->matricula);

    for(int i = 0; i < 3; i++){

        do{

            printf("Nota %d: ", i + 1);
            scanf("%f", &a->notas[i]);
            getchar();

            if(a->notas[i] < 0 || a->notas[i] > 10){

                printf("\n\tDigite uma Nota Entre [0 e 10]!\n\n");
            }

        }while(a->notas[i] < 0 || a->notas[i] > 10);
    }
}

void imprimirAluno(Aluno a){

    printf("\n\tNome: %s\n", a.nome);
    printf("\tNumero da Matricula: %d\n", a.matricula);

    for(int i = 0; i < 3; i++){

        printf("\tNota %d: %.2f\n", i + 1, a.notas[i]);
    }
}

void inserirNoVetor(Aluno *a){

    for(int i = 0; i < 5; i++){

        printf("\nDADOS ALUNO %d:\n\n", i + 1);

        lerAluno(&a[i]);
    }
}

void maiorNota1(Aluno *a, Aluno *maiorN1){

    *maiorN1 = a[0];

    for(int i = 1; i < 5; i++){

        if(a[i].notas[0] > maiorN1->notas[0]){

            *maiorN1 = a[i];
        }
    }
}

float media(Aluno a){

    float media, soma = 0;

    for(int i = 0; i < 3; i++){

        soma = soma + a.notas[i];
    }

    media = soma / 3;

    return media;
}

void maiorMenorMedia(Aluno *a, Aluno *maiorM, Aluno *menorM){

    *maiorM = a[0];
    *menorM = a[0];

    for(int i = 1; i < 5; i++){

        if(media(a[i]) > media(*maiorM)){

            *maiorM = a[i];
        }

        if(media(a[i]) < media(*menorM)){

            *menorM = a[i];
        }
    }
}

void imprimirListaAlunos(Aluno *a, Aluno maiorN1, Aluno maiorM, Aluno menorM){

    printf("\n\t-------------------- LISTA ALUNOS --------------------\n");

    for(int i = 0; i < 5; i++){

        imprimirAluno(a[i]);

        if(media(a[i]) >= 6){

            printf("\tAluno Aprovado!\n\tMedia: %.2f\n", media(a[i]));
        }
        else{

            printf("\tAluno Reprovado!\n\tMedia: %.2f\n", media(a[i]));
        }
    }

    printf("\n\t------------------------------------------------------\n");

    printf("\n\tALUNO COM A MAIOR NOTA 1:\n");
    printf("\n\tNome: %s\n\tNota 1: %.2f\n", maiorN1.nome, maiorN1.notas[0]);

    printf("\n\tALUNO COM A MAIOR MEDIA:\n");
    printf("\n\tNome: %s\n\tMedia: %.2f\n", maiorM.nome, media(maiorM));

    printf("\n\tALUNO COM A MENOR MEDIA:\n");
    printf("\n\tNome: %s\n\tMedia: %.2f\n", menorM.nome, media(menorM));
}

int main(){

    Aluno a[5], maiorN1, maiorM, menorM;

    inserirNoVetor(a);

    maiorNota1(a, &maiorN1);

    maiorMenorMedia(a, &maiorM, &menorM);

    imprimirListaAlunos(a, maiorN1, maiorM, menorM);

    return 0;
}
