#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Numero invalido! Deve ser natural (positivo).\n");
        return 1;
    }

    for (int i = num + 1; i < 1000; i++) {
        if (i % num == 0) {
            count++;
        }
    }

    printf("Existem %d multiplos de %d maiores que ele e menores que 1000.\n", count, num);
    return 0;
}
