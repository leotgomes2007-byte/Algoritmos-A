#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    // Entrada de dados
    printf("Digite o primeiro operando: ");
    scanf("%f", &num1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o segundo operando: ");
    scanf("%f", &num2);

    // Processamento com estrutura condicional
    if(operacao == '+') {
        resultado = num1 + num2;
    }
    else if(operacao == '-') {
        resultado = num1 - num2;
    }
    else if(operacao == '*') {
        resultado = num1 * num2;
    }
    else if(operacao == '/') {
        if(num2 != 0) {
            resultado = num1 / num2;
        } else {
            // Saída de erro
            printf("Erro: divisao por zero!\n");
            return 1;
        }
    }
    else {
        printf("Operacao invalida!\n");
        return 1;
    }

    // Saída do resultado
    printf("%.2f %c %.2f = %.2f\n", num1, operacao, num2, resultado);
    return 0;
}
