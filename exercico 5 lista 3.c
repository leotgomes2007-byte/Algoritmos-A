#include <stdio.h>
int main (){
int fat=1, n, x;
printf("Digite um numero:\n");
scanf("%d",&n);
for(x=n;x>=1;x--){
fat=fat*x;
}
printf("fatorial de %d = %d\n",n,fat);
return 0;
}
