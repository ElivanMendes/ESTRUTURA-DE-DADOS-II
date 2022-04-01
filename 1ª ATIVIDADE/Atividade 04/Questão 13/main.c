#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerStrings(char *s1, char *s2){

    printf("Digite a Primeira String: ");
    scanf("%19[^\n]", &*s1);
    getchar();
    printf("Digite a Segunda String: ");
    scanf("%19[^\n]", &*s2);
}

void imprimir(char *s1, char *s2){

    printf("\n\tString 1: %s\n", s1);
    printf("\tString 2: %s\n", s2);
}

void verificarStrings(char *s1, char *s2){

    if(strstr(s1, s2) - s1 >= 0){

        printf("\n\tString 2 Esta Contida na String 1!\n");
    }
    else{

        printf("\n\tString 2 Nao Esta Contida na String 1!\n");
    }
}

int main(){

    char s1[20];
    char s2[20];

    lerStrings(s1, s2);

    imprimir(s1, s2);

    verificarStrings(s1, s2);

    return 0;
}
