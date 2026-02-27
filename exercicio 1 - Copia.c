#include <stdio.h>

int main() {
//variaveis
    int num1, num2, i;
//entrada
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
//logica
    // Determina qual é o menor e qual é o maior
    int inicio = (num1 < num2) ? num1 : num2;
    int fim = (num1 > num2) ? num1 : num2;

    printf("Números pares no intervalo [%d, %d]:\n", inicio, fim);

    for(i = inicio; i <= fim; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
