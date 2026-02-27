#include<stdio.h>
int main(){
int i,n=80;
int a[n],menor=999999999,posicaoM=0;
printf("Informe os 80 valores que deseja comparar:\n");
for(i=0;i<n;i++){
    printf("A[%d]:",i);
    scanf("%d",&a[i]);
    if(a[i]<menor){
        menor=a[i];
        posicaoM=i;
    }
}
printf("O menor numero informado foi %d na posiçao %d do vetor informado",menor,posicaoM);
return 0;
















}
