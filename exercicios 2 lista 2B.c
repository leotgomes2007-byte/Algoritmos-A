#include <stdio.h>

int main() {
    float altura, peso, peso_ideal;
    char sexo;
//entrada
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

//logica e calculo
    if(sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    }
    else { // Assume feminino como padrão para qualquer outra entrada
        peso_ideal = (62.1 * altura) - 44.7;
    }

//saida
    printf("\nPeso ideal calculado: %.2f kg\n", peso_ideal);

    if(peso < peso_ideal) {
        printf("Você está %.2f kg abaixo do peso ideal.\n", peso_ideal - peso);
    }
    else if(peso > peso_ideal) {
        printf("Você está %.2f kg acima do peso ideal.\n", peso - peso_ideal);
    }
    else {
        printf("Você está exatamente no peso ideal!\n");
    }

    return 0;
}
