#include <stdio.h>
int main (){
int i;
int v[10];
printf("Informe os valores inteiros:\n");
for(i=0;i<=9;i++){
    printf("v[%d]:",i);
    scanf("%d",&v[i]);
}
printf("vetor na ordem inversa de indice\n");
for(i=9;i>=0;i--){
    printf("v[%d]=%d\n",i,v[i]);
}
return 0;
}
