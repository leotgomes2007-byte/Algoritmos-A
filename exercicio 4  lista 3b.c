#include <stdio.h>

int main() {
    printf("Numeros de 4 digitos com a propriedade especial:\n");

    for (int num = 1000; num <= 9999; num++) {
        int primeira_parte = num / 100;  // pega os dois primeiros dígitos
        int segunda_parte = num % 100;   // pega os dois últimos dígitos
        int soma = primeira_parte + segunda_parte;

        if (soma * soma == num) {
            printf("%d (dividido em %d e %d, soma %d, %d^2 = %d)\n",
                   num, primeira_parte, segunda_parte, soma, soma, num);
        }
    }

    return 0;
}
