#include <stdio.h>
#include <stdlib.h>

int main(){

    int A, *B, **C, ***D;

    B = &A;
    C = &B;
    D = &C;

    printf("Digite um Numero: ");
    scanf("%d", &A);

    printf("\n\tDobro de %d: %d\n", A, *B * 2);
    printf("\tTriplo de %d: %d\n", A, **C * 3);
    printf("\tQuadruplo de %d: %d\n", A, ***D * 4);

    return 0;
}
