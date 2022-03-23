#include <stdio.h>
#include <stdlib.h>

void lerNotas(float *n, char *op){

    for(int i = 0; i < 3; i++){

        do{
            printf("Digite a Nota %d: ", i + 1);
            scanf("%f", &n[i]);
            getchar();

            if(n[i] < 0 || n[i] > 10){
                printf("\n\tDigite uma Nota entre [0 a 10]!\n\n");
            }

        }while(n[i] < 0 || n[i] > 10);
    }

    printf("\n\tA - Media Aritimetica\n\tP - Media Ponderada\n\tH - Media Harmonica\n");
    scanf("%c", &*op);
}

float medias(float *n, char op){

    if(op == 'A' || op == 'a'){

        float mediaA = (n[0] + n[1] + n[2]) / 3;

        return mediaA;
    }
    else if(op == 'P' || op == 'p'){

        float mediaP = ((n[0] * 5) + (n[1] * 3) + (n[2] * 2)) / 10;

        return mediaP;
    }
    else if(op == 'H' || op == 'h'){

        float mediaH = 3 / ((1 / n[0]) + (1 / n[1]) + (1 / n[2]));

        return mediaH;
    }
}

void imprimirMedia(float *n, char op){

    for(int i = 0; i < 3; i++){

        printf("\tNota %d: %.2f\n", i + 1, n[i]);
    }

    printf("\n\tMEDIA: %.2f\n", medias(n, op));
}

int main(){

    float notas[3];
    char opcao;

    lerNotas(notas, &opcao);

    imprimirMedia(notas, opcao);

    return 0;
}
