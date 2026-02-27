#include <stdio.h>

int main() {
//variaveis
int num1, num2, i, soma = 0;
//entrada
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
//logica
    int inicio = (num1 < num2) ? num1 : num2;
    int fim = (num1 > num2) ? num1 : num2;

    for(i = inicio; i <= fim; i++) {
        soma += i;
    }

    printf("Somatório dos números no intervalo [%d, %d]: %d\n", inicio, fim, soma);

    return 0;
}
