#include<stdio.h>
int main(){
  //variaveis
  float prova1,prova2,trabalho1,trabalho2,media_final,nota1,nota2;
  //entrada
  printf("Informe a nota tirada na primeira prova\n");
  scanf("%f",&prova1);
  printf("Informe a nota tirada na segunda prova\n");
  scanf("%f",&prova2);
  printf("Informe a nota tirado no primeiro trabalho\n");
  scanf("%f",&trabalho1);
  printf("Informe a nota tirada no segundo trabalho\n");
  scanf("%f",&trabalho2);
  //calculo
  nota1=(prova1+trabalho1)/2;
  nota2=(prova2+trabalho2)/2;
  media_final=(nota1+nota2)/2;
  //saida
  printf("media_final=%f\n",media_final);
  return 0;














}
