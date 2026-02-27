#include<stdio.h>
int main (){
int i,codificador;
char codigo[100],novoCodigo[100];
printf("Informe o codigo para ser codificado:");
scanf("%s",codigo);
printf("Informe quantas casas o codigo deve ser movido para ser codificado\n");
scanf("%d",&codificador);
for(i=0;codigo[i];i++){
    novoCodigo[i]=codigo[i]+codificador;
}
printf("O codigo era:");
printf("%s\n",codigo);
printf("O codigo codificado ficou:");
printf("%s",novoCodigo);
return 0;
}
