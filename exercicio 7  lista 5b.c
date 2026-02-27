#include<stdio.h>

int main() {
    int i, j;
    int a[4][4];
    int somaTotal = 0, somaDiagonal = 0;
    int somaLinha2 = 0, produtoLinha2 = 1;

    printf("Informe a matriz 4x4:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);

            // Soma total de todos elementos
            somaTotal += a[i][j];

            // Soma da diagonal principal (i == j)
            if(i == j) {
                somaDiagonal += a[i][j];
            }

            // Operações na segunda linha (índice 1)
            if(i == 1) {
                somaLinha2 += a[i][j];
                produtoLinha2 *= a[i][j];
            }
        }
    }

    printf("\nResultados:\n");
    printf("- Soma de todos elementos da matriz: %d\n", somaTotal);
    printf("- Soma da diagonal principal: %d\n", somaDiagonal);
    printf("- Soma dos elementos da segunda linha: %d\n", somaLinha2);
    printf("- Produto dos elementos da segunda linha: %d\n", produtoLinha2);

    return 0;
}
