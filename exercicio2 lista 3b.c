#include <stdio.h>
    int main(){
    int n,impar;
    printf("escreva um numero(entre 1 e 1000)\n");
    scanf("%d",&n);
    for(n; n<=1000; n++){
        if (n%2 != 0){
            printf("Numeros impar=%d:\n",n);
        }
    }

}
