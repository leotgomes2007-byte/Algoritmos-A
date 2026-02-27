#include <stdio.h>
#include <limits.h> // Para INT_MIN e INT_MAX

int main() {
    int N, M;
    int i, j;

    // Solicita as dimensões da matriz com validação
    do {
        printf("Digite o número de linhas (1-50): ");
        scanf("%d", &N);
    } while (N < 1 || N > 50);

    do {
        printf("Digite o número de colunas (1-50): ");
        scanf("%d", &M);
    } while (M < 1 || M > 50);

    int matriz[N][M];

    // Preenche a matriz
    printf("\nDigite os elementos da matriz %dx%d:\n", N, M);
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Encontra o maior valor da matriz e sua linha
    int max_valor = INT_MIN;
    int linha_max = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (matriz[i][j] > max_valor) {
                max_valor = matriz[i][j];
                linha_max = i;
            }
        }
    }

    // Encontra o menor valor na linha que contém o maior valor
    int min_valor = INT_MAX;
    int coluna_min = 0;

    for (j = 0; j < M; j++) {
        if (matriz[linha_max][j] < min_valor) {
            min_valor = matriz[linha_max][j];
            coluna_min = j;
        }
    }

    // Exibe os resultados
    printf("\nO maior valor da matriz é %d na posição [%d][%d]\n",
           max_valor, linha_max, coluna_min);
    printf("O elemento minimax é %d na posição [%d][%d]\n",
           min_valor, linha_max, coluna_min);

    return 0;
}
