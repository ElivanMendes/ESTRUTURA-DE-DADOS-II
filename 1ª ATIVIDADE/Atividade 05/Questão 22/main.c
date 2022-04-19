#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

typedef struct{

    char rua[30];
    char estado[20];
    char bairro[30];
    char cep[20];
    char cidade[20];

}Endereco;

typedef struct{

    char nome[30];
    char identidade[20];
    char telefone[20];
    char cpf[20];
    int idade;
    float salario;
    char estadoCivil[20];
    char sexo;
    Endereco endereco;

}Cadastro;

void lerInfo(Cadastro *c){

    printf("Nome: ");
    scanf("%29[^\n]", &c->nome);
    getchar();
    printf("Identidade: ");
    scanf("%19[^\n]", &c->identidade);
    getchar();
    printf("Telefone: ");
    scanf("%19[^\n]", &c->telefone);
    getchar();
    printf("CPF: ");
    scanf("%19[^\n]", &c->cpf);
    printf("Idade: ");
    scanf("%d", &c->idade);
    printf("Salario: ");
    scanf("%f", &c->salario);
    getchar();
    printf("Estado Civil: ");
    scanf("%19[^\n]", &c->estadoCivil);
    getchar();
    printf("Sexo: ");
    scanf("%c", &c->sexo);
    getchar();
    printf("Rua: ");
    scanf("%29[^\n]", &c->endereco.rua);
    getchar();
    printf("Bairro: ");
    scanf("%29[^\n]", &c->endereco.bairro);
    getchar();
    printf("Cidade: ");
    scanf("%19[^\n]", &c->endereco.cidade);
    getchar();
    printf("CEP: ");
    scanf("%19[^\n]", &c->endereco.cep);
    getchar();
    printf("Estado: ");
    scanf("%19[^\n]", &c->endereco.estado);
    getchar();
}

void imprimirInfo(Cadastro c){

    printf("\n\tNome: %s\n", c.nome);
    printf("\tIdade: %d\n", c.idade);
    printf("\tSexo: %c\n", c.sexo);
    printf("\tIdentidade: %s\n", c.identidade);
    printf("\tCPF: %s\n", c.cpf);
    printf("\tEstado Civil: %s\n", c.estadoCivil);
    printf("\tTelefone: %s\n", c.telefone);
    printf("\tSalario: R$%.2f\n", c.salario);
    printf("\tRua: %s\n", c.endereco.rua);
    printf("\tBairro: %s\n", c.endereco.bairro);
    printf("\tCidade: %s\n", c.endereco.cidade);
    printf("\tCEP: %s\n", c.endereco.cep);
    printf("\tEstado: %s\n", c.endereco.estado);
}

int cadastrarPessoa(Cadastro **c, int quant){

    if(quant < MAX){

        Cadastro *novo = malloc(sizeof(Cadastro));

        lerInfo(novo);

        c[quant] = novo;

        return 1;
    }
    else{

        printf("\n\tImpossivel Realizar Novo Cadastro. Vetor Cheio!\n");

        return 0;
    }
}

void buscarPessoa(Cadastro **c, char *ident, int quant){

    int cont = 0;

    for(int i = 0; i < quant; i++){

        if(strcmp((*c[i]).identidade, ident) == 0){

            printf("\n\t--------------- INFORMACOES ---------------\n");

            imprimirInfo(*c[i]);

            printf("\n\t-------------------------------------------\n");

            cont++;
        }
    }

    if(cont == 0){

        printf("\n\tNENHUMA PESSOA ENCONTRADA!\n");
    }
}

void maiorIdade(Cadastro **c, int quant){

    if(quant != 0){

        Cadastro *pMaiorIdade = c[0];

        for(int i = 1; i < quant; i++){

            if((*c[i]).idade > pMaiorIdade->idade){

                pMaiorIdade = c[i];
            }
        }

        printf("\n\t---------- PESSOA COM MAIOR IDADE ----------\n");

        printf("\n\tNome: %s\n", pMaiorIdade->nome);
        printf("\tIdade: %d\n", pMaiorIdade->idade);

        printf("\n\t--------------------------------------------\n");
    }
    else{

        printf("\n\tNENHUMA PESSOA CADASTRADA!\n");
    }
}

void sexoMasculino(Cadastro **c, int quant){

    if(quant != 0){

        int cont = 0;

        printf("\n\t--------- PESSOAS DO SEXO MASCULINO ---------\n");

        for(int i = 0; i < quant; i++){

            if((*c[i]).sexo == 'M' || (*c[i]).sexo == 'm'){

                printf("\n\tNome: %s\n", (*c[i]).nome);

                cont++;
            }
        }

        if(cont == 0){

            printf("\n\tNENHUMA PESSOA DO SEXO MASCULINO!\n");
        }

        printf("\n\t---------------------------------------------\n");
    }
    else{

        printf("\n\tNENHUMA PESSOA CADASTRADA!\n");
    }
}

void salarioMaior1000(Cadastro **c, int quant){

    if(quant != 0){

        int cont = 0;

        printf("\n\t---- PESSOAS COM SALARIO ACIMA DE R$1000 ----\n");

        for(int i = 0; i < quant; i++){

            if((*c[i]).salario > 1000.0){

                printf("\n\tNome: %s\n", (*c[i]).nome);
                printf("\tSalario: R$%.2f\n", (*c[i]).salario);

                cont++;
            }
        }

        if(cont == 0){

            printf("\n\tNENHUMA PESSOA COM SALARIO ACIMA DE R$1000\n");
        }

        printf("\n\t---------------------------------------------\n");
    }
    else{

        printf("\n\tNENHUMA PESSOA CADASTRADA!\n");
    }
}

int main(){

    Cadastro *cad[MAX];
    int opcao, quant = 0;
    char ident[20];

    do{

        printf("\n\t0 - Sair\n\t1 - Cadastrar\n\t2 - Buscar Pessoa por Identidade\n\t3 - Pessoa com Maior Idade\n");
        printf("\t4 - Pessoas do Sexo Masculino\n\t5 - Pessoas com Salario Maior que R$1000\n");
        scanf("%d", &opcao);
        getchar();
        printf("\n\tOpcao %d\n\n", opcao);

        switch(opcao){
        case 1:

            quant += cadastrarPessoa(cad, quant);

            break;
        case 2:

            printf("Digite a Identidade: ");
            scanf("%19[^\n]", &ident);

            buscarPessoa(cad, ident, quant);

            break;
        case 3:

            maiorIdade(cad, quant);

            break;
        case 4:

            sexoMasculino(cad, quant);

            break;
        case 5:

            salarioMaior1000(cad, quant);

            break;
        default:

            if(opcao != 0){

                printf("\n\tOpcao Invalida!\n");
            }
        }

    }while(opcao != 0);

    return 0;
}
