# include<stdio.h>
int main(){
//variaveis
int a,b,resultado;
//entrada
    printf("Informe o valor de a\n");
    scanf("%d",&a);
    printf("Informe o valor de b\n");
    scanf("%d",&b);
//condições
if(a>b){
    printf("A é maior que B");
    resultado=a-b;
    printf("resultado=%d",resultado);
}else if(a==b){
    printf("A é igual a B,portanto o resultado é zero");
}else{
    printf("B é maior que A");
    resultado=b-a;
    printf("resultado=%d",resultado);
}
return 0;
}
