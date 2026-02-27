#include<stdio.h>
int main(){
int n=10,i;
int a[n],b[n],c[n];
    printf("Informe o vetor A:\n");
    for(i=0;i<n;i++){
        printf("A[%d]:",i);
        scanf("%d",&a[i]);
    }
        printf("Informe o vetor B:\n");
        for(i=0;i<n;i++){
            printf("B[%d]:",i);
            scanf("%d",&b[i]);
        }
            for(i=0;i<n;i++){
                c[i]=a[i]*b[i];
            }
                printf("Os elementos do vetor C sao:\n");
                for(i=0;i<n;i++){
                    printf("C[%d]=%d\n",i,c[i]);
                }
return 0;
}
