#include<stdio.h>
int main(){
int codigo[10],indice;
float peso[10];

printf("Informe os dados(codigo e peso) dos 10 bois:\n");

for (indice=0;indice<=9;indice++){
    printf("Codigo:");
    scanf("%d",&codigo[indice]);
    printf("peso:");
    scanf("%d",&peso[indice]);
}
printf("\n\n Os dados informados foram:\n");
for(indice=0;indice<=9;indice++){
    printf("codigo: %d peso do boi: %.1f\n",codigo[indice],peso[indice]);
}
return 0;
}














