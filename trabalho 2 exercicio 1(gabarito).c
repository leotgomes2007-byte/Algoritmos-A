#include<stdio.h>
int main(){
int maio[31],i,soma=0;
int maiorTemp=-99,menorTemp=99;
float media;
printf("Maior-Temperatura:\n");
for(i=0;i<31;i++){
    printf("Dia %d:",i+1);
    scanf("%d",&maio[i]);
    soma+=maio[i];

if(maio[i]>maiorTemp){
    maiorTemp=maio[i];
   }
    if(maio[i]<menorTemp){
    menorTemp=maio[i];
    }
    }
media=(float)soma/31;
printf("Media de temperatura em amio:%.2f\n",media);
pritnf("Maior temperatura:%d\n",maiorTemp);
pritnf("Menor temperatura:%d\n",menorTemp);
printf("Dias com temperatura maxima\n");
for(i=0;i<31;i++){
    if(maiorTemp==maio[i]){
            printf("Dia %d\n",i+1);
            printf("Dias com temperatura minima:\n");
}
}
for(i=0;i<31;i++){
if(menorTemp==maio[i]){
    printf("dia %d\n",i+1);
}
}
return 0;
}
