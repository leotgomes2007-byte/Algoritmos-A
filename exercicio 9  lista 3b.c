#include<stdio.h>
int main () {
int base,potencia,i,resultado;
resultado=1;
printf("Informe o valor da base:\n");
scanf("%d",&base);
printf("Informe o valor de potencia:\n");
scanf("%d",&potencia);
for(i=1;i<=potencia;i++){
    resultado*=base;
printf("%d elevado a %d=%d\n",base,i,resultado);
}
return 0;
}
