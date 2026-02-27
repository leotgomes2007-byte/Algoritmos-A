#include<stdio.h>

int main() {
    float area_regiao, taxaDesmatamento, area_minima;
    int anoAtual, anos_decorridos = 0,ano_final;

    printf("Informe a area total da região desejada (km²):\n");
    scanf("%f", &area_regiao);
    printf("Informe a taxa de desmatamento anual (em decimal, ex: 0.015 para 1.5%%):\n");
    scanf("%f", &taxaDesmatamento);
    printf("Informe o ano atual:\n");
    scanf("%d", &anoAtual);

    area_minima = area_regiao * 0.20;

    while (area_regiao > area_minima) {
        area_regiao -= area_regiao * taxaDesmatamento;
        anos_decorridos++;
    }

    ano_final = anoAtual + anos_decorridos;

    printf("Em %d, a área estará reduzida a menos ou igual a 20%% de sua área original, o que corresponde a %.2f km².\n", ano_final, area_minima);

    return 0;
}
