
#include <stdio.h>
int main() {
    int mes, ano, dias;

    // Solicita ao usuário os valores do mês e ano
    printf("Digite um número inteiro de 1 a 12 (representando o mês): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    // Verifica se o mês é válido
    if (mes < 1 || mes > 12) {
        printf("Mês inválido! Digite um valor entre 1 e 12.\n");
        return 1; // Retorna código de erro
    }

    // Determina o número de dias no mês
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            // Verifica se o ano é bissexto
            if ((ano % 400 == 0) || (ano % 100 != 0 && ano % 4 == 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
    }

    // Exibe o resultado
    printf("O mês %d do ano %d tem %d dias.\n", mes, ano, dias);

    return 0;
}
