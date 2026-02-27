#include<stdio.h>

int main() {
    int i, j;
    int a[3][4], chute, v[4];

    printf("Informe a matriz A:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Informe o numero da linha que deseja isolar (0,1,2): ");
    scanf("%d", &chute);

    // Isola a linha escolhida
    for(j = 0; j < 4; j++) {
        v[j] = a[chute][j];
    }

    printf("Linha %d isolada:\n", chute);
    for(j = 0; j < 4; j++) {
        printf("%d ", v[j]);
    }

    return 0;
}
