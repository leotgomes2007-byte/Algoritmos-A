#include<stdio.h>
int main(){
//variaveis
int dias,mes,anos,total_dias;
//entrada
printf("Informe quantos anos voce tem:\n");
scanf("%d",&anos);
printf("Informe quantos meses:\n");
scanf("%d",&mes);
printf("Informe quantos dias:\n");
scanf("%d",&dias);
//calculo
total_dias=(anos*365)+(mes*30)+dias;
//saida
printf("total de dias=%d",total_dias);
return 0;
}
