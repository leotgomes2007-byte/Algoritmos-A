# include<stdio.h>
#include<math.h>
int main (){
    float a,b,c;
    float raiz1,raiz2;
//leitura de dados
    printf("calculo das raizes de uma equação do 2 grau-formula de báskara\n ");
    printf("Informe os coeficientes\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
//calculos
    raiz1=(-b+sqrt(b*b-4*a*b)/(2*a));
    raiz2=(-b-sqrt(b*b-4*a*b)/(2*a));
//saida de dados
    printf("raiz1=%f\n",raiz1);
    printf("raiz2=%f\n",raiz2);
    return 0;

}
