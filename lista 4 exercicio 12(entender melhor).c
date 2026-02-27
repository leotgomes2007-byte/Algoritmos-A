#include <stdio.h>

int main() {
    int x[10], y[10], u[20], d[10], inter[10];
    int i, j, k_u = 10, k_d = 0, k_inter = 0;

    // Lê o conjunto X
    printf("Digite 10 números para X:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &x[i]);
        u[i] = x[i]; // Copia X para U (união)
    }

    // Lê o conjunto Y
    printf("Digite 10 números para Y:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &y[i]);

        // Verifica se o número já está em X (para união e interseção)
        int repetido = 0;
        for(j = 0; j < 10; j++) {
            if(y[i] == x[j]) {
                repetido = 1;
                break;
            }
        }

        // União: se não for repetido, adiciona à união
        if(!repetido) {
            u[k_u] = y[i];
            k_u++;
        }

        // Interseção: se for repetido, adiciona à interseção
        if(repetido) {
            inter[k_inter] = y[i];
            k_inter++;
        }
    }

    // Diferença: elementos em X que não estão em Y
    for(i = 0; i < 10; i++) {
        int esta_em_y = 0;
        for(j = 0; j < 10; j++) {
            if(x[i] == y[j]) {
                esta_em_y = 1;
                break;
            }
        }
        if(!esta_em_y) {
            d[k_d] = x[i];
            k_d++;
        }
    }

    // Mostra os resultados
    printf("\nConjunto X:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", x[i]);
    }

    printf("\n\nConjunto Y:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", y[i]);
    }

    printf("\n\nUnião de X e Y:\n");
    for(i = 0; i < k_u; i++) {
        printf("%d ", u[i]);
    }

    printf("\n\nDiferença X - Y:\n");
    for(i = 0; i < k_d; i++) {
        printf("%d ", d[i]);
    }

    printf("\n\nInterseção de X e Y:\n");
    for(i = 0; i < k_inter; i++) {
        printf("%d ", inter[i]);
    }

    return 0;
}
