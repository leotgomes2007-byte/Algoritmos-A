#include<stdio.h>

int main() {
    int i, j;
    int a[4][3], soma[4] = {0}; // Inicializa soma com zeros
    int menor_soma, linha_menor;

    printf("Informe a matriz 4x3 desejada:\n");

    // Leitura da matriz e cálculo das somas
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            soma[i] += a[i][j]; // Soma os elementos da linha
        }
    }

    // Encontra a linha com menor soma
    menor_soma = soma[0];
    linha_menor = 0;

    for(i = 1; i < 4; i++) {
        if(soma[i] < menor_soma) {
            menor_soma = soma[i];
            linha_menor = i;
        }
    }

    printf("A linha que possui a menor soma eh a %d (soma = %d)\n", linha_menor, menor_soma);

    return 0;
}
