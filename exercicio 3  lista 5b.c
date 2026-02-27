#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j;
    int a[5][5], qualquer, Kqualquer = 0, maior = -1, qmaior = 0;
    int linhas[25], colunas[25];

    srand(time(NULL));

    printf("Informe um valor qualquer:\n");
    scanf("%d", &qualquer);

    // Preenche a matriz e faz as verificações
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            a[i][j] = rand() % 30;

            // Verifica se é igual ao valor informado
            if(a[i][j] == qualquer) {
                Kqualquer++;
            }

            // Verifica o maior elemento
            if(a[i][j] > maior) {
                maior = a[i][j];
                qmaior = 1;
                linhas[0] = i;
                colunas[0] = j;
            }
            else if(a[i][j] == maior) {
                linhas[qmaior] = i;
                colunas[qmaior] = j;
                qmaior++;
            }
        }
    }

    printf("\nO numero informado apareceu %d vezes\n", Kqualquer);
    printf("O maior elemento da matriz eh %d que apareceu %d vezes, nas posicoes:\n", maior, qmaior);

    // Mostra todas as posições onde o maior aparece
    for(i = 0; i < qmaior; i++) {
        printf("linha %d coluna %d\n", linhas[i], colunas[i]);
    }

    printf("\nMatriz gerada:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
