#include<stdio.h>
int main(){
int x,y,x1,x2;
printf("Informe valor incial do intervalo desejado de x:\n");
scanf("%d",&x1);
printf("Informe valor final do intervalo desejado de x:\n");
scanf("%d",&x2);
for(x=x1;x<=x2;x++){
    y=4*x+3;
    printf("se X=%d o resultado eh=%d\n",x,y);
}
return 0;
}
