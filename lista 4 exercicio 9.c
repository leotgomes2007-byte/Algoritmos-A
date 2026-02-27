#include <stdio.h>
int main(){
int i,n=20;
int a[n];
printf("Informe o vetor A:\n");
for(i=0;i<n;i++){
    printf("A[%d]:",i);
    scanf("%d",&a[i]);
}
printf("O vetor informado eh:\n");
for(i=0;i<n;i++){
    printf("A[%d]=%d\n",i,a[i]);
}
printf("O vetor invertido eh:\n");
for(i=0;i<n;i++){
    printf("B[%d]=%d\n",i,a[n-1-i]);
}
return 0;
}
