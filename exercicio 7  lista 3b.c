#include <stdio.h>

int main() {
    int n, num;
    int maior;
    int menor;

    printf("Quantos numeros deseja ler? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }else if (num < menor) {
            menor = num;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    return 0;
}
