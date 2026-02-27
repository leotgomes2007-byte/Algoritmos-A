#include<stdio.h>

int main() {
    int i, j;
    int m[10][10], somaD = 0;

    // Leitura da matriz
    printf("Informe a matriz 10x10:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);

            // Soma da diagonal principal (i == j)
            if(i == j) {
                somaD += m[i][j];
            }
        }
    }

    // Multiplica a segunda linha (índice 1) por 5
    for(j = 0; j < 10; j++) {
        m[1][j] *= 5;
    }

    // Resultados
    printf("\nA soma da diagonal principal deu: %d\n", somaD);

    printf("\nMatriz modificada (segunda linha multiplicada por 5):\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%5d ", m[i][j]);
        printf("\n");
    }

    return 0;
}
