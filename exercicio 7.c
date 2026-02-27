#include <stdio.h>
int main(){
//variaveis
int n,a,b,soma,quadrado;
//entrada
printf("Digite um numero(1000 a 9999)");
scanf("%d",&n);
if(n>=1000 && n<=9999){
    a=n/100;
    b=n%100;
    soma=a+b;
    quadrado=soma*soma;
        if(quadrado==n){
            printf("O numero %i obedece a regra\n",n);
        }else{
        printf("O numero %i não obedece a regra",n);
        }
    }else{
    printf("O numero deve estar no intervalo[1000,9999]");
    }
return 0;
}






























