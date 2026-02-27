//medida consumo de km
//ganho liquido
#include<stdio.h>
int main(){
  //variaveis
  float valor_combustivel,odometro_i,odometro_f,combustivel_gasto,ganho_cliente,media_consumo,ganho_liquido,valor_gasto;
  //entrada
  printf("valor do combustivel\n");
  scanf("%f",&valor_combustivel);
  printf("valor do odometro no inicio\n");
  scanf("%f",&odometro_i);
  printf("valor do odometro no final\n");
  scanf("%f",&odometro_f);
  printf("quantidade de combustivel gasto\n");
  scanf("%f",&combustivel_gasto);
  printf("valor total do valor recebido em todas as viagens do dia\n");
  scanf("%f",&ganho_cliente);
  //calculos e saida
  media_consumo=(odometro_f-odometro_i)/combustivel_gasto;
  printf("media_consumo=%.2f\n",media_consumo);
  valor_gasto=media_consumo*valor_combustivel;
  ganho_liquido=ganho_cliente-valor_gasto;
  printf("ganho_liquido=%.2f\n",ganho_liquido);
return 0;
}
