#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int i, j;
    int a[4][4];
    int simetrica = 1, diagonal = 1, Tsuperior = 1, Tinferior = 1;

    srand(time(NULL));

    // Preenche a matriz com valores aleatórios
    printf("Matriz gerada:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            a[i][j] = rand() % 5;
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Verifica o tipo da matriz
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            // Verifica simetria
            if(a[i][j] != a[j][i]) {
                simetrica = 0;
            }

            // Verifica diagonal
            if(i != j && a[i][j] != 0) {
                diagonal = 0;
            }

            // Verifica triangular superior
            if(i > j && a[i][j] != 0) {
                Tsuperior = 0;
            }

            // Verifica triangular inferior
            if(i < j && a[i][j] != 0) {
                Tinferior = 0;
            }
        }
    }

    // Exibe resultados
    printf("\nResultados:\n");
    if(simetrica) {
        printf("- A matriz eh simetrica\n");
    }
    if(diagonal) {
        printf("- A matriz eh diagonal\n");
    }
    if(Tsuperior) {
        printf("- A matriz eh triangular superior\n");
    }
    if(Tinferior) {
        printf("- A matriz eh triangular inferior\n");
    }

    if(!simetrica && !diagonal && !Tsuperior && !Tinferior) {
        printf("- A matriz nao se enquadra em nenhuma categoria especifica\n");
    }

    return 0;
}
