#include<stdio.h>
int main (){
int i;
int resultados[100],soma0=0,soma1=0,soma2=0;
printf("Informe os resultados do experimento fisico(0,1,2):\n");
for(i=0;i<100;i++){
    printf("Resultado[%d]:",i);
    scanf("%d",&resultados[i]);
    if(resultados[i]==0){
        soma0++;
    }else if(resultados[i]==1){
        soma1++;
        }else if(resultados[i]==2){
        soma2++;
    }
}
printf("Tiveram %d resultados 0\n",soma0);
printf("Tiveram %d resultados 1\n",soma1);
printf("Tiveram %d resultados 2\n",soma2);
return 0;
}
