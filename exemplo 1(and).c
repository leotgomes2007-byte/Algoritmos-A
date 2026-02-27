#include <stdio.h>
int main (){
float media, frequencia;
printf("Informe a media:");
scanf("%f",&media);
printf("Informe a frequencia%%:");
scanf("%f",&frequencia);
if(media>=6 && frequencia>=75)
    printf("Aprovado");
else
    printf("Reprovado");
return 0;
}
