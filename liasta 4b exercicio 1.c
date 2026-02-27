#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int cod[50],i;
float preco[50];
srand(time(NULL));
printf("Codigo\t preço (R$)\n");
for(i=0;i<50;i++){
    cod[i]=rand()%100;
    preco[i]=rand()*1.25;
printf("%d\t %.2f\n",cod[i],preco[i]);
}
return 0;

}
