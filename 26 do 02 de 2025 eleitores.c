#include <stdio.h>
int main(){
  //declaração das variaveis
  int eleitores,v_brancos,v_nulos,v_validos;
  float p_validos,p_brancos,p_nulos;
  //leitura de dados
  printf("Informe o numero de eleitores\n");
  scanf("%d",&eleitores);
  printf("Informe o numero de votos validos\n");
  scanf("%d",&v_validos);
  printf("Informe o numero de votos brancos\n");
  scanf("%d",&v_brancos);
  printf("Informe o numero de votos nulos\n");
  scanf("%d",&v_nulos);
  //calculo dos eleitores e saida
  p_validos=(float)(v_validos*100/eleitores);
  printf("Percentual de votos validos=%.2f\n",p_validos);
  p_brancos=(float) v_brancos*100/eleitores;
  printf("percentual de votos brancos=%.2f\n",p_brancos);
  p_nulos=(float) v_nulos*100/eleitores;
  printf("percentual de votos nulos=%.2f\n",p_nulos);
  return 0;







}
