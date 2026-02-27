#include <stdio.h>

#define n 5
int main (){

int v[n],i,j,positivos[n];

printf("informe o vetor:\n");

    for(i=0;i<n;i++){
        printf("Vetor[%d]:",i);
        scanf("%d",&v[i]);
    }
    
    for(i=0, j=0;i<n;i++){
        if(v[i]>0){
            positivos[j]=v[i];
            j++;
        }
    }
    printf("A quantidade de numeros positivos do vetor eh %d\n",j);
    
    printf("Os numeros positivos do vetor sao:\n");
    for(i=0; i<j; i++)
    	printf("%d\n",positivos[i]);
        
return 0;
}
