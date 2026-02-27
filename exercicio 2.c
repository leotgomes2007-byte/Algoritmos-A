#include <stdio.h>
int main(){
//variaveis
int a,b,c,d;
float media;
//entrada de dados
printf("Informe os 4 valores\n");
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);
printf("d=");
scanf("%d",&d);
//calculo
media=(a+b+c+d)/4;
//logica
if(media<a){
    printf("'A' eh maior que a media");
}
if(media<b){
    printf("'B' eh maior que a media");
}
if(media<c){
    printf("'C' eh maior que a media");
}
if(media<d){
    printf("'D' eh maior que a media");
}
return 0;
}



















