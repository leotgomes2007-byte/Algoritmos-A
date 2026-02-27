#include <stdio.h>

int main() {
    int codigo, codigoMenor = -1, codigoMaior = -1;
    float consumo, menorConsumo = 999999999, maiorConsumo = -1;
    float somaIndustrial = 0;
    int countIndustrial = 0;
    char tipo;

    do {
        printf("Insira o codigo do consumidor:\n");
        scanf("%d", &codigo);

        printf("Informe o tipo de consumidor (R=residencial, C=comercial, I=industrial, X=fim do programa):\n");
        scanf(" %c", &tipo);


        printf("Informe o seu consumo mensal de energia em kWh:\n");
        scanf("%f", &consumo);

        switch(tipo) {
            case 'R':
            case 'r':
                if(consumo < menorConsumo) {
                    menorConsumo = consumo;
                    codigoMenor = codigo;
                }
                break;

            case 'C':
            case 'c':
                if(consumo > maiorConsumo) {
                    maiorConsumo = consumo;
                    codigoMaior = codigo;
                }
                break;

            case 'I':
            case 'i':
                somaIndustrial += consumo;
                countIndustrial++;
                break;

            default:
                printf("Tipo de consumidor invalido!\n");
        }
    } while(tipo!='x'&& tipo!='X');

    if(codigoMenor != -1) {
        printf("\nMenor consumo residencial: Codigo %d com %.2f kWh\n", codigoMenor, menorConsumo);
    } else {
        printf("\nNenhum consumidor residencial foi informado.\n");
    }

    if(codigoMaior != -1) {
        printf("Maior consumo comercial: Codigo %d com %.2f kWh\n", codigoMaior, maiorConsumo);
    } else {
        printf("Nenhum consumidor comercial foi informado.\n");
    }

    if(countIndustrial > 0) {
        printf("Media de consumo industrial: %.2f kWh\n", somaIndustrial/countIndustrial);
    } else {
        printf("Nenhum consumidor industrial foi informado.\n");
    }

    return 0;
}
