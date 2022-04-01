#include <stdio.h>
#include <stdlib.h>

void lerValores(int *v){

    for(int i = 0; i < 3; i++){

        printf("Digite o Numero da Posicao [%d]: ", i);
        scanf("%d", &v[i]);
    }
}

int ordenarValores(int *v){

    int a, b, c;

    a = v[0];
    b = v[1];
    c = v[2];

    if(v[1] < v[0] && v[1] < v[2] && v[0] < v[2]){

        v[0] = b;
        v[1] = a;
        v[3] = c;
    }

    if(v[1] < v[0] && v[1] < v[2] && v[2] < v[0]){

        v[0] = b;
        v[1] = c;
        v[2] = a;
    }

    if(v[2] < v[0] && v[2] < v[1] && v[0] < v[1]){

        v[0] = c;
        v[1] = a;
        v[2] = b;
    }

    if(v[2] < v[0] && v[2] < v[1] && v[1] < v[0]){

        v[0] = c;
        v[1] = b;
        v[2] = a;
    }

    if(v[2] < v[1]){

        v[0] = a;
        v[1] = c;
        v[2] = b;
    }

    if(v[0] == v[1] && v[0] == v[2] && v[1] == v[2]){

        return 1;
    }
    else{

        return 0;
    }
}

void retorno(int *v){

    if(ordenarValores(v) == 1){

        printf("\n\tVALORES IGUAIS!\n");
    }
    else{

        printf("\n\tVALORES DIFERENTES!\n");
    }
}

void imprimir(int *v){

    printf("\n\tValores Ordenados: ");

    for(int i = 0; i < 3; i++){

        printf("%d ", v[i]);
    }

    printf("\n");
}

int main(){

    int valores[3];

    lerValores(&valores);

    retorno(valores);

    imprimir(valores);

    return 0;
}
