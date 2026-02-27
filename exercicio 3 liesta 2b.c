#include <stdio.h>

int main() {
// Variáveis
    int l1, l2, l3;

// Entrada de dados
    printf("Informe o valor dos lados do triangulo:\n");
    printf("Lado 1 = ");
    scanf("%d", &l1);
    printf("Lado 2 = ");
    scanf("%d", &l2);
    printf("Lado 3 = ");
    scanf("%d", &l3);

// Verifica se é um triângulo (todas as condições devem ser verdadeiras)
    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {
// Classificação do triângulo
        if (l1 == l2 && l2 == l3) {
            printf("O triangulo informado eh Equilatero.\n");
        }
        else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("O triangulo informado eh Isosceles.\n");
        }
        else {
            printf("O triangulo informado eh Escaleno.\n");
        }
    }
    else {
    printf("Os valores informados nao formam um triangulo!\n");
    }

    return 0;
}
