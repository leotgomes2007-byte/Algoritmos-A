# include <stdio.h>
# include <math.h>
int main (){
//declaração de variaveis
    float x,y,resultado;
//entrada de dados
    printf("Informe o valor de x e y\n");
    printf("X=");
    scanf("%f",&x);
    printf("Y=");
    scanf("%f",&y);
//calculo
resultado=sqrt(x*y)+(x*y)/(2*x)+ 3*3+x*x/4;
//saida de dados
printf("resultado=%f",resultado);
return 0;
}
