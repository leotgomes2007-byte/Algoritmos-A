#include<stdio.h>
int main(){
int i;
int a[10],b[10];
float mediaA,mediaB,somaA=0,somaB=0;
    printf("Informe o vetor A:\n");
    for(i=0;i<10;i++){
        printf("A[%d]:",i);
        scanf("%d",&a[i]);
        somaA+=a[i];
    }
    printf("Informe o vetor B:\n");
    for(i=0;i<10;i++){
        printf("B[%d]:",i);
        scanf("%d",&b[i]);
        somaB+=b[i];
    }
    mediaA=somaA/10;
    mediaB=somaB/10;

    if(somaA==somaB){
        printf("A soma e a media do vetores A e B são iguais");
    }else if(somaA>somaB){
        printf("A soma e a media do vetor A é maior que a do vetor B");
        }else{
            printf("A soma e a media do vetor B é maior que a do vetor A");
        }
return 0;
}
