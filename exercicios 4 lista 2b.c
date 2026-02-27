#include <stdio.h>

int main() {
    float salario, INSS, salario_liquido, desconto;

    // Entrada de dados
    printf("Informe o valor do seu salario:\n");
    scanf("%f", &salario);

    // Lógica para cálculo do INSS (atualizado para 2023)
    if (salario <= 965.67) {
        printf("O valor do INSS e 8%%\n");
        desconto = salario * 0.08;
    }
    else if (salario <= 1609.45) {
        printf("O valor do INSS e 9%%\n");
        desconto = salario * 0.09;
    }
    else if (salario <= 3218.90) {
        printf("O valor do INSS e 11%%\n");
        desconto = salario * 0.11;
    }
    else {
        // Teto do INSS em 2023 (valor fixo para salários acima de R$ 3218.90)
        printf("O valor do INSS e fixo (teto)\n");
        desconto = 3218.90 * 0.11; // Desconto máximo
    }

    salario_liquido = salario - desconto;
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
