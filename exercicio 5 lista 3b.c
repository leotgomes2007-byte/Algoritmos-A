#include <stdio.h>

int main() {
    int termo = 1000;
    int soma = 0;
    int sinal = 1;

    for (int i = 1; i <= 50; i++) {
        soma += sinal * termo;
        termo -= 3;
        sinal *= -1;
    }

    printf("A soma dos 50 primeiros termos da série é: %d\n", soma);
    return 0;
}
