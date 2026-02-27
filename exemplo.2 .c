#include <stdio.h>
int main (){
int i,n,flag=1;
int v[10];
printf("Informe os valores inteiros:\n");
    for(i=0;i<=9;i++){
        printf("v[%d]:",i);
        scanf("%d",&v[i]);
    }
printf("vetor na ordem inversa de indice\n");
    for(i=9;i>=0;i--){
        printf("v[%d]=%d\n",i,v[i]);
    }
printf("Digite um numero para procurar no vetor:");
scanf("%d",&n);
    for(i=0;i<10;i++){
        if(v[i]==n){
            flag=0;
        }
    }
if(flag==1){
    printf("valor %d nao encontrado",n);
}else{
    printf("valor %d encontrado",n);

}

    return 0;
    }
