#include<stdio.h>

int main() {
    int i, j;
    int m[5][5], par = 0, linha;
    float soma = 0, media;

    // Leitura da matriz e contagem de pares
    printf("Informe a matriz 5x5 desejada:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            if(m[i][j] % 2 == 0) {
                par++;
            }
        }
    }

    // Mostrar elementos que não estão na diagonal principal
    printf("\nElementos que nao fazem parte da diagonal principal:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i != j) {
                printf("%d ", m[i][j]); // Adicionado espaço entre números
            }
        }
    }

    // Cálculo da média da linha selecionada
    printf("\n\nInforme uma linha (0-4) para calcular a media: ");
    scanf("%d", &linha);

    soma = 0;
    for(j = 0; j < 5; j++) {
        soma += m[linha][j];
    }
    media = soma / 5;

    // Resultados
    printf("\nA media da linha %d eh %.2f\n", linha, media);
    printf("A matriz informada tem %d numeros pares\n", par);

    return 0;
}
