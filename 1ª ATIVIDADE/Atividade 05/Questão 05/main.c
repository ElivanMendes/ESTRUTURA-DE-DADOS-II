#include <stdio.h>
#include <stdlib.h>

typedef struct{

    float x;
    float y;
    float z;

}Vetor;

void somaVetor(Vetor vet, float *v){

    v[0] = vet.x + vet.x;
    v[1] = vet.y + vet.y;
    v[2] = vet.z + vet.z;
}

int main(){

    float vet[3];
    Vetor v;

    v.x = 10.3;
    v.y = 20.2;
    v.z = 30.1;

    somaVetor(v, vet);

    printf("\n\tValores: ");

    for(int i = 0; i < 3; i++){

        printf("%.2f ", vet[i]);
    }

    printf("\n");

    return 0;
}
