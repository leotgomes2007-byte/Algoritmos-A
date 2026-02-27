#include <stdio.h>
int main () {
int n,soma=0;
int contar=0;
float media;
printf("digite numeros diferentes, e zero para sair\n");
while(n!=0){
scanf("%i",&n);
soma= soma + n;
//soma+= n;
contar++;
}
printf("quantidade de numeros diferente de zero=%i\n",contar-1);
media=soma/(contar-1);
printf("Media=%f",media);
return 0;
}
