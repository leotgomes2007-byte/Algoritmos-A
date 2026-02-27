#include<stdio.h>

int main() {
    float peso, altura, diferenca, pesoIdeal;

    printf("Informe a sua altura (em metros):\n");
    scanf("%f", &altura);
    printf("Informe o seu peso (em kg):\n");
    scanf("%f", &peso);

    pesoIdeal = (72.7 * altura) - 58;

    if(peso == pesoIdeal) {
        printf("Você está no peso ideal!\n");
    } else {
        if(peso > pesoIdeal) {
            diferenca = peso - pesoIdeal;
            printf("Você está %.2f kg acima do peso ideal\n", diferenca);
        } else {
            diferenca = pesoIdeal - peso;
            printf("Você está %.2f kg abaixo do peso ideal\n", diferenca);
        }
    }

    return 0;
}
