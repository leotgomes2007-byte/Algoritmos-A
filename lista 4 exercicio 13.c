#include <stdio.h>

int main() {
    int vetor[15];
    int i, j, temp;

    // Passo 1: Ler os 15 números do usuário
    printf("Digite 15 números inteiros:\n");
    for(i = 0; i < 15; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Passo 2: Ordenação decrescente com Bubble Sort
    for(i = 0; i < 14; i++) {
        for(j = 0; j < 14 - i; j++) {
            if(vetor[j] < vetor[j+1]) {  // Comparação para ordem decrescente
                // Troca os elementos se estiverem na ordem errada
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

    // Passo 3: Exibir o vetor ordenado
    printf("\nVetor ordenado em ordem decrescente:\n");
    for(i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
