#include <stdio.h>
int main(){
int legenda[5],votos[5],i,vencedor=0,iVencedor,totalVotos=0;
float percentual[5];
printf("Informe o numero de cada partido:\n");
for(i=0;i<5;i++){
    scanf("%d",&legenda[i]);
}
printf("Votos:\n");
for(i=0;i<5;i++){
scanf("%d",&votos[i]);
if(votos[i]>vencedor){
    vencedor=votos[i];
    iVencedor=i;
    totalVotos+=votos[i];
}
}for(i=0;i<5;i++){
percentual[i]=(float) votos[i]/totalVotos*100;
}
printf("legenda\t quantidade de votos\t percentual\n");
for(i=0;i<5;i++){
printf("%d\t %d\t %.2f%%\n",legenda[i],votos[i],percentual[i]);
printf("Vendedor:\n");
printf("Legenda:%d-quantidade de votos:%d-percentual:2.f\n",legenda[iVencedor],votos[iVencedor],percentual[iVencedor]);
}
return 0;
}
