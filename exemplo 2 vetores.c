#include<stdio.h>
int main(){
int codigo[10],indice,indiceMaior;
float peso[10],maiorPeso=0,media,soma;

printf("Informe os dados(codigo e peso) dos 10 bois:\n");

for (indice=0;indice<=9;indice++){
    printf("Codigo:");
    scanf("%d",&codigo[indice]);
    printf("peso:");
    scanf("%f",&peso[indice]);
    if(peso[indice]>maiorPeso){
        maiorPeso=peso[indice];
        indiceMaior=indice;
    }
    soma+=peso[indice];
}
printf("\n\n Os dados informados foram:\n");
for(indice=0;indice<=9;indice++){
    printf("codigo: %d peso do boi: %.1f\n",codigo[indice],peso[indice]);

}
    media=soma/10;
    printf("Maior peso= %f\n",maiorPeso);
    printf("Codigo=%d\n",codigo[indiceMaior]);
    printf("Media=%f",media);
return 0;
}














