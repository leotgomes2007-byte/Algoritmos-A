#include<stdio.h>

int main() {
    int i, j;
    int a[3][3], b[3][3], somaA = 0, somaB = 0;

    printf("Informe a matriz A:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if(i == j) {
                somaA += a[i][j];
            }
        }
    }

    printf("Informe a matriz B:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
            if(i == j) {
                somaB += b[i][j];
            }
        }
    }

    if(somaA == somaB) {
        printf("A soma das diagonais da matriz A e B sao iguais (%d == %d)\n", somaA, somaB);
    } else {
        printf("A soma das diagonais da matriz A e B sao diferentes (%d != %d)\n", somaA, somaB);
    }

    return 0;
}
