#include <stdio.h>
int main (){
int n=20,j;
int vetor[n],pares[n],i;
    printf("informe os valores do vetor\n");
    for(i=0;i<n;i++){
        printf("vetor[%d]:",i);
        scanf("%d",&vetor[i]);

    }
    printf("O vetor informado é:\n");
    for(i=0;i<n;i++){
        printf("vetor[%d]:%d\n",i,vetor[i]);
    }
    printf("Os numeros pares do vetor sao:\n");
    for(i=0,j=0;i<n;i++){
        if(vetor[i]%2==0){
            pares[j]=vetor[i];
            printf("%d\n",pares[j]);
            j++;
        }
    }
    return 0;
}
