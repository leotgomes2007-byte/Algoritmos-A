#include <stdio.h>
int main(){
  //declaração de variaveis
  float salario,reajuste,valorFinal;
  float valor_reajuste;
  //entrada de dados
  printf("informe seu salario:\n");
  scanf("%f",&salario);
  printf("informe o valor do reajuste:\n");
  scanf("%f",&reajuste);
  //calculo do reajuste
  valor_reajuste=salario*reajuste/100;
  valorFinal=salario+valor_reajuste;
  //saida de dados
  printf("valorFinal= R$ %f",valorFinal);
  return 0;
}
