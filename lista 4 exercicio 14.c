#include<stdio.h>
int main (){
int i,n=4;
int a[n],b[n];
printf("Informe o vator desejado:\n");
for(i=0;i<n;i++){
    printf("A[%d]:",i);
    scanf("%d",&a[i]);
    b[n-1-i]=a[i];
}
for(i=0;i<n;i++){
    printf("\nA[%d]=%d\n",i,a[i]);
    printf("\nB[%d]=%d\n",i,b[i]);
}
return 0;
}
