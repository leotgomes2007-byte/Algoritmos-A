#include <stdio.h>
#include<math.h>
int main(){
//variaveis
int base,i,potencia;
//entrada
printf("Informe a base:\n");
scanf("%d",&base);

//logica
for(i=2;i<6;i++){
    potencia=pow(base,i);
    printf("potencia de %i elevado a %d=%d\n ",base,i,potencia);
}
return 0;








}
