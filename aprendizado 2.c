#include<stdio.h>
int main(){
int n,a;
printf("Digite um numero maior que zero:");
scanf("%d",&n);

if(n>0){
    for(a=1;a<=n;a++){
        printf("%d\t",a);
}
}else{
printf("O numero deve ser maior que zero!");
}
return 0;


}
