#include<stdio.h>
int main(){
int i,n=5;
int codigo,a[n];
printf("Informe o codigo desejado(0=fim do algoritmo,1=vetor na ordem que foi lido,2=vetor na ordem inversa):\n");
scanf("%d",&codigo);
printf("Informe os valores do vetor desejado:\n");
for(i=0;i<n;i++){
    printf("A[%d]:\n",i);
    scanf("%d",&a[i]);
}
switch(codigo){
case 0: break;

case 1:for(i=0;i<n;i++){
    printf("A[%d]=%d\n",i,a[i]);
    }
break;
case 2:printf("Vetor na forma invertida:\n");
    for(i=n;i>=0;i--){
    printf("A[%d]=%d\n",i,a[i]);
}
break;

default:printf("codigo invalido!!!\n");
break;
}


return 0;
}
