#include<stdio.h>
int main () {
int base,potencia,resultado;
printf("Informe o valor da base:\n");
scanf("%d",&base);
printf("Informe o valor de potencia:\n");
scanf("%d",&potencia);
resultado=pow(base,potencia);
printf("%d elevado a %d=%d\n",base,potencia,resultado);
return 0;
}
