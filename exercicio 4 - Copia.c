#include <stdio.h>

int main() {
//variaveis
int num, pares = 0, impares = 0;
 //entrada
    printf("Digite números (0 para parar):\n");
//logica
    do {
        scanf("%d", &num);

        if(num != 0) {
            if(num % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    } while(num != 0);

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
