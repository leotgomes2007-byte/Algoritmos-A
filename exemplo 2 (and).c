#include <stdio.h>
int main(){
int a,b,c;
//entrada
printf("Informe o valor de a:");
scanf("%d",&a);
printf("Informe o valor de b:");
scanf("%d",&b);
printf("Informe o valor de c:");
scanf("%d",&c);
//ler os valores
if(a>b && a>c)
    printf("o valor 'a' é o maior %i",a);
else if (b>a && b>c)
    printf("O valor 'b' é o maior %i",b);
    else
        printf("O valor 'c' é o maior %i",c);
return 0;



}
