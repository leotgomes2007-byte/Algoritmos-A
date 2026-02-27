#include<stdio.h>
int main(){
int produto,lojaA,lojaB,diferenca;
    printf("Informe quantos produtos vc deseja comprar\n");
    scanf("%d",&produto);

    lojaA=produto*230;
    lojaB=produto*345;
    diferenca=lojaB-lojaA;

    printf("se vc comprar %d produtos na loja A vc vai gastar %d, e na loja B %d, sendo a loja A a mais barata,sendo %d a diferença entre elas",produto,lojaA,lojaB,diferenca);
    return 0;
    }
