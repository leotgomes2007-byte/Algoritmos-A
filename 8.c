#include<stdio.h>
int main (){
//declaração de variavel
float comprimento,largura,altura,area1,area2,area_total,area_azulejo,resposta;
//entrada de dados
area_azulejo=1,5;
printf("Informe o comprimento da cozinha\n");
scanf("%f",&comprimento);
printf("Informe a largura da cozinha\n");
scanf("%f",&largura);
printf("Informe a altura da cozinha\n");
scanf("%f",&altura);
//calculo
area1=2*(comprimento*altura);
area2=2*(largura*altura);
area_total=area1+area2;
resposta=area_total/area_azulejo;
//saida de dados
printf("resposta=%f\n",resposta);
return 0;
}
