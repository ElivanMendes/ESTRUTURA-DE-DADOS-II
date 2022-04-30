#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct{

    char nome[30];
    char sobrenome[30];

}Nome;

typedef struct{

    char rua[30];
    int numero;
    char complemento[30];
    char bairro[30];
    char cep[20];
    char cidade[20];
    char estado[20];
    char pais[20];

}Endereco;

typedef struct{

    char ddd[5];
    char numero[15];

}Telefone;

typedef struct{

    int dia, mes, ano;

}DataDeNascimento;

typedef struct{

    Nome nome;
    Endereco endereco;
    Telefone telefone;
    DataDeNascimento dataDeNascimento;
    char email[30];
    char observacoes[60];
    int idContato;

}Contato;

void lerInfo(Contato *c){

    printf("DADOS PESSOAIS:\n\n");

    printf("Primeiro Nome: ");
    scanf("%29[^\n]", &c->nome.nome);
    getchar();
    printf("Segundo Nome: ");
    scanf("%29[^\n]", &c->nome.sobrenome);

    printf("\nDATA DE NASCIMENTO:\n\n");

    printf("Dia: ");
    scanf("%d", &c->dataDeNascimento.dia);
    printf("Mes: ");
    scanf("%d", &c->dataDeNascimento.mes);
    printf("Ano: ");
    scanf("%d", &c->dataDeNascimento.ano);
    getchar();

    printf("\nENDERECO:\n\n");

    printf("Rua: ");
    scanf("%29[^\n]", &c->endereco.rua);
    printf("Numero: ");
    scanf("%d", &c->endereco.numero);
    getchar();
    printf("Complemento: ");
    scanf("%29[^\n]", &c->endereco.complemento);
    getchar();
    printf("Bairro: ");
    scanf("%29[^\n]", &c->endereco.bairro);
    getchar();
    printf("CEP: ");
    scanf("%19[^\n]", &c->endereco.cep);
    getchar();
    printf("Cidade: ");
    scanf("%19[^\n]", &c->endereco.cidade);
    getchar();
    printf("Estado: ");
    scanf("%19[^\n]", &c->endereco.estado);
    getchar();
    printf("Pais: ");
    scanf("%19[^\n]", &c->endereco.pais);
    getchar();

    printf("\nCONTATO:\n\n");

    printf("E-mail: ");
    scanf("%29[^\n]", &c->email);
    getchar();

    printf("\nTELEFONE:\n\n");

    printf("DDD: ");
    scanf("%4[^\n]", &c->telefone.ddd);
    getchar();
    printf("Numero: ");
    scanf("%14[^\n]", &c->telefone.numero);
    getchar();

    printf("\nOBSERVACOES:\n\n");

    printf("Observacoes: ");
    scanf("%59[^\n]", &c->observacoes);
}

void imprimirInfo1(Contato c){

    printf("\n\t--------------- ID CONTATO %d ---------------\n", c.idContato);

    printf("\n\tDADOS PESSOAIS:\n");

    printf("\tNome: %s %s\n", c.nome.nome, c.nome.sobrenome);
    printf("\tData de Aniversario: %d/%d\n", c.dataDeNascimento.dia, c.dataDeNascimento.mes);

    printf("\n\tENDERECO:\n");

    printf("\tRua: %s\n", c.endereco.rua);
    printf("\tNumero: %d\n", c.endereco.numero);
    printf("\tComplemento: %s\n", c.endereco.complemento);
    printf("\tBairro: %s\n", c.endereco.bairro);
    printf("\tCEP: %s\n", c.endereco.cep);
    printf("\tCidade: %s\n", c.endereco.cidade);
    printf("\tEstado: %s\n", c.endereco.estado);
    printf("\tPais: %s\n", c.endereco.pais);

    printf("\n\tCONTATO:\n");

    printf("\tE-mail: %s\n", c.email);
    printf("\tTelefone: %s %s\n", c.telefone.ddd, c.telefone.numero);

    printf("\n\tANOTACOES:\n");

    printf("\tObservacoes: %s\n", c.observacoes);

    printf("\n\t---------------------------------------------\n");
}

void imprimirInfo2(Contato c){

    printf("\n\t--------------- ID CONTATO %d ---------------\n", c.idContato);

    printf("\n\tNome: %s %s\n", c.nome.nome, c.nome.sobrenome);
    printf("\tE-mail: %s\n", c.email);
    printf("\tTelefone: %s %s\n", c.telefone.ddd, c.telefone.numero);

    printf("\n\t---------------------------------------------\n");
}

void atualizarIdContato(Contato **c, int quant){

    for(int i = 0; i < quant; i++){

        (*c[i]).idContato = (i + 1);
    }
}

void ordenar(Contato **c, int quant){

    for(int i = 0; i < quant - 1; i++){
        for(int j = i + 1; j < quant; j++){

            if(strcmp((*c[i]).nome.nome, (*c[j]).nome.nome) > 0){

                Contato *temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }

            if(strcmp((*c[i]).nome.nome, (*c[j]).nome.nome) == 0){

                if(strcmp((*c[i]).nome.sobrenome, (*c[j]).nome.sobrenome) > 0){

                    Contato *temp = c[i];
                    c[i] = c[j];
                    c[j] = temp;
                }
            }
        }
    }

    atualizarIdContato(c, quant);
}

int cadastrarContato(Contato **c, int quant){

    if(quant < MAX){

        Contato *novo = malloc(sizeof(Contato));

        lerInfo(novo);

        novo->idContato = (quant + 1);

        c[quant] = novo;

        printf("\n\tContato Cadastrado com Sucesso!\n");

        return 1;
    }
    else{

        printf("\n\tImpossivel Adicionar Novo Contato. Agenda Cheia!\n");

        return 0;
    }
}

void imprimirAgenda1(Contato **c, int quant){

    if(quant != 0){

        printf("\n\t---------------- CONTATOS %d ----------------\n", quant);

        for(int i = 0; i < quant; i++){

            imprimirInfo1(*c[i]);
        }

        printf("\n\t---------------------------------------------\n");
    }
    else{

        printf("\n\tAgenda Vazia!\n");
    }
}

void imprimirAgenda2(Contato **c, int quant){

    if(quant != 0){

        printf("\n\t---------------- CONTATOS %d ----------------\n", quant);

        for(int i = 0; i < quant; i++){

            imprimirInfo2(*c[i]);
        }

        printf("\n\t---------------------------------------------\n");
    }
    else{

        printf("\n\tAgenda Vazia!\n");
    }
}

int removerContato(Contato **c, int quant, int idContat){

    if(quant != 0){

        int aux = 0;

        for(int i = 0; i < quant; i++){

            if((*c[i]).idContato == idContat){

                for(int j = (*c[i]).idContato - 1; j < quant - 1; j++){

                    Contato *temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }

                printf("\n\tContato de %s %s Removido com Sucesso!\n", (*c[quant - 1]).nome.nome, (*c[quant - 1]).nome.sobrenome);

                free(&*c[quant - 1]);

                aux++;

                return 1;
            }
        }

        if(aux == 0){

            printf("\n\tId Contato Invalido!\n");
        }

        return 0;
    }
    else{

        return 0;
    }
}

void buscarContatoNome(Contato **c, int quant, char *nomeBusc){

    if(quant != 0){

        int cont = 0;

        for(int i = 0; i < quant; i++){

            if(strcmp((*c[i]).nome.nome, nomeBusc) == 0){

                cont++;
            }
        }

        printf("\n\t--------------- CONTATOS %d -----------------\n", cont);

        for(int i = 0; i < quant; i++){

            if(strcmp((*c[i]).nome.nome, nomeBusc) == 0){

                imprimirInfo1(*c[i]);
            }
        }

        if(cont == 0){

            printf("\n\t\tNENHUM CONTATO ENCONTRADO!\n");
        }

        printf("\n\t---------------------------------------------\n");
    }
}

void buscarContatoMesAniv(Contato **c, int quant, int mesAniv){

    if(quant != 0){

        int cont = 0;

        for(int i = 0; i < quant; i++){

            if((*c[i]).dataDeNascimento.mes == mesAniv){

                cont++;
            }
        }

        printf("\n\t--------------- CONTATOS %d -----------------\n", cont);

        for(int i = 0; i < quant; i++){

            if((*c[i]).dataDeNascimento.mes == mesAniv){

                imprimirInfo1(*c[i]);
            }
        }

        if(cont == 0){

            printf("\n\t\tNENHUM CONTATO ENCONTRADO!\n");
        }

        printf("\n\t---------------------------------------------\n");
    }
}

void buscarContatoDiaMesAniv(Contato **c, int quant, int mesAniv, int diaAniv){

    if(quant != 0){

        int cont = 0;

        for(int i = 0; i < quant; i++){

            if((*c[i]).dataDeNascimento.mes == mesAniv && (*c[i]).dataDeNascimento.dia == diaAniv){

                cont++;
            }
        }

        printf("\n\t--------------- CONTATOS %d -----------------\n", cont);

        for(int i = 0; i < quant; i++){

            if((*c[i]).dataDeNascimento.mes == mesAniv && (*c[i]).dataDeNascimento.dia == diaAniv){

                imprimirInfo1(*c[i]);
            }
        }

        if(cont == 0){

            printf("\n\t\tNENHUM CONTATO ENCONTRADO!\n");
        }

        printf("\n\t---------------------------------------------\n");
    }
}

int main(){

    Contato *agenda[MAX];
    int quant = 0, opcao, idContato, mesAniv, diaAniv;
    char nomeBuscado[30];

    do{

        printf("\n\t0 - Sair\n\t1 - Cadastrar Contato\n\t2 - Imprimir Nome, E-mail e Telefone\n");
        printf("\t3 - Imprimir Todos os Dados\n\t4 - Remover Contato\n\t5 - Buscar por Primeiro Nome\n");
        printf("\t6 - Buscar por Mes de Aniversario\n\t7 - Buscar por Dia e Mes de Aniversario\n");
        scanf("%d", &opcao);
        getchar();
        printf("\n\tOpcao: %d\n\n", opcao);

        switch(opcao){
        case 1:

            quant += cadastrarContato(agenda, quant);

            ordenar(agenda, quant);

            break;
        case 2:

            imprimirAgenda2(agenda, quant);

            break;
        case 3:

            imprimirAgenda1(agenda, quant);

            break;
        case 4:

            if(quant != 0){

                printf("\nInforme o Id do Contato que Deseja Remover: ");
                scanf("%d", &idContato);

                quant -= removerContato(agenda, quant, idContato);

                atualizarIdContato(agenda, quant);
            }
            else{

                printf("\n\tAgenda Vazia!\n");
            }

            break;
        case 5:

            if(quant != 0){

                printf("\nInforme o Primeiro Nome Buscado: ");
                scanf("%29[^\n]", &nomeBuscado);

                buscarContatoNome(agenda, quant, nomeBuscado);
            }
            else{

                printf("\n\tAgenda Vazia!\n");
            }

            break;
        case 6:

            if(quant != 0){

                printf("\nInforme o Mes de Aniversario: ");
                scanf("%d", &mesAniv);

                buscarContatoMesAniv(agenda, quant, mesAniv);
            }
            else{

                printf("\n\tAgenda Vazia!\n");
            }

            break;
        case 7:

            if(quant != 0){

                printf("\nInforme o Dia de Aniversario: ");
                scanf("%d", &diaAniv);
                printf("Informe o Mes de Aniversario: ");
                scanf("%d", &mesAniv);

                buscarContatoDiaMesAniv(agenda, quant, mesAniv, diaAniv);
            }
            else{

                printf("\n\tAgenda Vazia!\n");
            }

            break;
        default:

            if(opcao != 0){

                printf("\n\tOpcao Invalida!\n");
            }
        }

    }while(opcao != 0);

    return 0;
}
