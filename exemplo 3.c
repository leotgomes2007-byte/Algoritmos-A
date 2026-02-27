#include<stdio.h>
int main(){
int i,n=10;
int a[n],b[n],c[n],par[n],qPar=0,j=0;
printf("Informe o vetor A:\n");
for(i=0;i<n;i++){
    printf("a[%d]:",i);
    scanf("%d",&a[i]);
}
printf("Informe o vetor B:\n");
for(i=0;i<n;i++){
    printf("b[%d]:",i);
    scanf("%d",&b[i]);
}
printf("C=A+B\n");
for(i=0;i<n;i++){
c[i]=a[i]+b[i];
printf("c[%d]=%d\n",i,c[i]);
}
printf("Elementos pares em A\n");
for(i=0;i<n;i++){
    if(a[i]%2==0){
        printf("%d\t\n",a[i]);
        qPar++;
        par[j]=a[i];

    }
}
printf("a quantidade de intens pares eh %d\n",qPar);
return 0;
}
