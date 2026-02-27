#include <stdio.h>
int main (){
float votos,v=0,contar=0;
int i,n_candidato,Vn_candidato,percentualV;
for(i=1;i<=10;i++){
    printf("Informe o numero do candidato:\n");
    scanf("%d",&n_candidato);
    printf("Informe o numero de votos recebidos do candidato:\n");
    scanf("%d",&votos);
    contar+=votos;
    if(votos>v){
        v=votos;
        Vn_candidato=n_candidato;
    }
}
percentualV=(contar/v)*100;
printf("O vencedor eh %d,com %d %% de votos",Vn_candidato,percentualV);
return 0;
}


















