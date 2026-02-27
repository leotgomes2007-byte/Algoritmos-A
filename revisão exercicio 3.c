#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;

    printf("Informe a distancia da escada da arvore (em metros):\n");
    scanf("%f", &a);
    printf("Informe a altura em que o gato está (em metros):\n");
    scanf("%f", &b);

    // Calculando a hipotenusa usando o Teorema de Pitágoras
    c = sqrt(a*a + b*b);

    printf("O comprimento da escada deve ser %.2f metros\n", c);

    return 0;
}
