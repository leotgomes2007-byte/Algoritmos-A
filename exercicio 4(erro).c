#include <stdio.h>
int main(){
//variaveis
int operacao,a,b,resultado;
//entrada
printf("Informe os valores:\n");
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("Informe a operação 1 – Adição, 2 – Subtração, 3 – Multiplicação e 4 – Divisão\n");
scanf("%d",&operacao);
switch(operacao){
 case'1':
        printf("voce escolheu soma");
        resultado=a+b;
        printf("resultado=%d",resultado);
        break;
 case'2':
        printf("voce escolheu subtracao");
        resultado=a-b;
        printf("resultado=%d",resultado);
        break;
 case'3':
        printf("voce escolheu multiplicação");
        resultado=a*b;
        printf("resultado=%d",resultado);
        break;
 case'4':
        printf("voce escolheu divisao");
        resultado=a/b;
        printf("resultado=%d",resultado);
        break;

   default: printf("erro no sitema");
    break;
}
return 0;
}
