#include<stdio.h>
int main(){
int i;
int v[10];
v[1]=1;
for(i=1;i<=10;i++){
v[i+1]=v[i]+i;
}
printf("O vetor resultante foi:\n");
for(i=1;i<=10;i++){
            printf("%d\n",v[i]);
}
return 0;
}
