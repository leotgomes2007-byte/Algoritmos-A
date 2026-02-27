#include<stdio.h>
int main(){
int i,n=100;
int a[n],q;
printf("informe o vetor a:\n");
for(i=0;i<n;i++){
    printf("A[%d]:\n",i);
    scanf("%d",&a[i]);
    if(a[i]==2 || a[i]==4 || a[i]==8){
        q+=1;
    }
}
printf("No vetor informado foram repetidas %d vezes os numeros 2,4,8\n",q);
return 0;
}
