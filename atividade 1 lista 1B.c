#include <stdio.h>
# include <math.h>
int main () {
//declaração de variaveis
float x,resultado;
//entrada de dados
    printf("Informe o valor de x\n");
    scanf("%f",&x);
//calculo
    resultado=(x*x)+(3*(pow(x,x+1))/2+sqrt(x+1));
//saida de dados
    printf("resultado=%.2f\n",resultado);
    return 0;
}










