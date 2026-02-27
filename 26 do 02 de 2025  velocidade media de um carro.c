//velocidade media
#include <stdio.h>
int main(){
  //declaração de variaveis
  float deslocamento,tempo,velocidade_media;
  //entrada de dados
  printf("Informe o deslocamento do veiculo\n");
  scanf("%f",&deslocamento);
  printf("Informe o tempo decorrido durante esse deslocamtneo\n");
  scanf("%f",&tempo);
  //calculo
  velocidade_media=deslocamento/tempo;
  //saida
  printf("velocidade_media=%f",velocidade_media);
  return 0;
}
