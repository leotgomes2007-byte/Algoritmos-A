#include <stdio.h>
int main(){
  //declaração de variavel
  float l1,l2,h,volume;
  //entrada de dados
  printf("digite as medidas da caixa\n");
  scanf("%f",&l1);
  scanf("%f",&l2);
  scanf("%f",&h);
  //calculo do volume
  volume=l1*l2*h;
  //saida de dados
  printf("volume=%.2f\n",volume);
  return 0;
}
