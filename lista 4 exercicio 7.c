#include <stdio.h>
int main(){
int n=8,i;
int a[n],b[n],c[n];
printf("Informe os valores do vetor A:\n");
    for(i=0;i<n;i++){
        printf("A[%d]:",i);
        scanf("%d",&a[i]);
    }
printf("Informe os valores do vetor B:\n");
        for(i=0;i<n;i++){
            printf("B[%d]:",i);
            scanf("%d",&b[i]);
        }
printf("Os valores do vetor C sao:\n");
            for(i=0;i<n;i++){
            c[i]=a[i]*b[i];
            printf("C[%d]=%d\n",i,c[i]);
            }
return 0;
}
