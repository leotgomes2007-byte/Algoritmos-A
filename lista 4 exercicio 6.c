#include<stdio.h>
int main (){
int n=5;
int a[n],b[n],i;
printf("Informe os valores do vetor A:\n");
for(i=1;i<=n;i++){
    printf("A[%d]:",i);
    scanf("%d",&a[i]);
    b[i]=a[i];
}
printf("O inverso do vetor A eh:\n");
for(i=5;i>=1;i--){
    printf("B[%d]=%d\n",i,b[i]);
}
return 0;
}
