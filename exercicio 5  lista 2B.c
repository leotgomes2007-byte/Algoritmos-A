#include <stdio.h>

int main() {
//variaveis
    float salario, aliquota = 0, imposto;
//entrada
    printf("Digite o salario mensal: R$ ");
    scanf("%f", &salario);
//logica
    if(salario <= 1566.61) {
        aliquota = 0;
    } else if(salario <= 2347.85) {
        aliquota = 7.5;
    } else if(salario <= 3130.51) {
        aliquota = 15.0;
    } else if(salario <= 3911.63) {
        aliquota = 22.5;
    } else {
        aliquota = 27.5;
    }
//saida
    imposto = salario * (aliquota / 100);

    printf("Salario mensal: R$ %.2f\n", salario);
    printf("Aliquota IR: %.1f%%\n", aliquota);
    printf("Imposto de Renda: R$ %.2f\n", imposto);

    return 0;
}
