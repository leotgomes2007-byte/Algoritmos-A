#include<stdio.h>
int main(){
int i,j;
int v1[5],v2[5],v3[10];
    printf("Informe o primeiro vetor:\n");
    for(i=0;i<5;i++){
        printf("V1[%d]:",i);
        scanf("%d",&v1[i]);
    }
    printf("Informe o segundo vetor:\n");
    for(i=0;i<5;i++){
        printf("V2[%d]:",i);
        scanf("%d",&v2[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            v3[j]=v1[i];
        }
    }
    for(i=0;i<5;i++){
        for(j=5;j<10;j++){
            v3[j]=v2[i];
        }
    }
    printf("O vetor resultante foi:\n");
    for(j=0;j<10;j++){
        printf("%d\n",v3[j]);
    }
return 0;
}
