#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int matriz[TAM][TAM];
    int nova_matriz[TAM][TAM];
    int i, j, linha, coluna, multiplicador;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche a matriz com valores aleatórios entre 1 e 100
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    // Exibe a matriz original
    printf("Matriz 10x10 gerada:\n");
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Solicita e exibe uma linha específica
    printf("\nDigite o número de uma linha (0-9) para exibir: ");
    scanf("%d", &linha);

    printf("Elementos da linha %d:\n", linha);
    for(j = 0; j < TAM; j++) {
        printf("%d ", matriz[linha][j]);
    }
    printf("\n");

    // Solicita e exibe uma coluna específica
    printf("\nDigite o número de uma coluna (0-9) para exibir: ");
    scanf("%d", &coluna);

    printf("Elementos da coluna %d:\n", coluna);
    for(i = 0; i < TAM; i++) {
        printf("%d ", matriz[i][coluna]);
    }
    printf("\n");

    // Multiplica a matriz por um valor informado
    printf("\nDigite um valor inteiro para multiplicar a matriz: ");
    scanf("%d", &multiplicador);

    // Cria e exibe a nova matriz multiplicada
    printf("\nNova matriz após multiplicação por %d:\n", multiplicador);
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            nova_matriz[i][j] = matriz[i][j] * multiplicador;
            printf("%6d", nova_matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
