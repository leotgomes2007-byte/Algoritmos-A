#include <stdio.h>
int main(){
int n=20,i;
int a[n],b[n];
printf("Informe os valores do vetor:\n");
    for(i=0;i<n;i++){
        printf("A[%d]:",i);
        scanf("%d",&a[i]);
            if(a[i]!=0){
                b[i]=a[i];
            }else{
                b[i]=2;
            }
    }
printf("Os numeros do novo vetor sao:\n");
    for(i=0;i<n;i++){
    printf("B[%d]=%d\n",i,b[i]);
    }
return 0;
}
