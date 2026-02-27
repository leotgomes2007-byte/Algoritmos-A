#include<stdio.h>
int main(){
//variaveis
int primeiro_elemento,razao,i;
//entrada
printf("Informe o primeiro elemento da PA\n");
scanf("%d",&primeiro_elemento);
printf("Informe a razao da PA\n");
scanf("%d",&razao);
//logica
for(i=0;i<10;i++){
primeiro_elemento=primeiro_elemento+razao;
printf("elemento %d=%d\n",i,primeiro_elemento);
}
return 0;







}
