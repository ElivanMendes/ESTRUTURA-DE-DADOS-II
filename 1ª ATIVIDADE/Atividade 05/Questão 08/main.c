#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int dia, mes, ano;

}Data;

typedef struct{

    char nome[50];
    int idade;
    char sexo;
    char cpf[20];
    Data dataNasc;
    int codigoSetor;
    char cargo[30];
    float salario;

}Funcionario;

void lerDados(Funcionario *f){

    printf("Nome: ");
    scanf("%49[^\n]", &f->nome);
    printf("Idade: ");
    scanf("%d", &f->idade);
    getchar();
    printf("Sexo(M/F): ");
    scanf("%c", &f->sexo);
    getchar();
    printf("CPF: ");
    scanf("%19[^\n]", &f->cpf);
    printf("Data Nascimento dd mm aaaa: ");
    scanf("%d%d%d", &f->dataNasc.dia, &f->dataNasc.mes, &f->dataNasc.ano);
    printf("Codigo do Setor: ");
    scanf("%d", &f->codigoSetor);
    getchar();
    printf("Cargo: ");
    scanf("%29[^\n]", &f->cargo);
    printf("Salario: ");
    scanf("%f", &f->salario);
}

void imprimir(Funcionario f){

    printf("\n\tNome: %s\n", f.nome);
    printf("\tIdade: %d\n", f.idade);
    printf("\tSexo: %c\n", f.sexo);
    printf("\tCPF: %s\n", f.cpf);
    printf("\tData de Nascimento: %2d/%2d/%4d\n", f.dataNasc.dia, f.dataNasc.mes, f.dataNasc.ano);
    printf("\tCodigo Setor: %d\n", f.codigoSetor);
    printf("\tCargo: %s\n", f.cargo);
    printf("\tSalario: R$ %.2f\n", f.salario);
}

int main(){

    Funcionario f;

    lerDados(&f);

    imprimir(f);

    return 0;
}
