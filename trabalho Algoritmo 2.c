#include <stdio.h>
int main(){
    //variaveis
    int i=0,resultado[447],inicializacao,menu,grenal_desejado,maior=-1;
    int n_grenal[447],gols_gremio[447],gols_inter[447],gols_jogo[447];
    int Tgols_gremio=0,Tgols_inter=0,Tgols=0,V_inter=0,V_gremio=0,empate=0;
    int total_grenais = 0;

    //1 parte - entrada de dados
        do{
            printf("Informe o numero do grenal:\n");
            scanf("%d",&n_grenal[i]);
            printf("Informe o numero de gols do Internacional neste jogo:\n");
            scanf("%d",&gols_inter[i]);
            Tgols_inter += gols_inter[i];
            printf("Informe o numero de gols do gremio neste jogo:\n");
            scanf("%d",&gols_gremio[i]);
            gols_jogo[i] = gols_gremio[i] + gols_inter[i];
            total_grenais=total_grenais+1;

            if(gols_jogo[i] > maior){
                maior = gols_jogo[i];
            }

            Tgols_gremio += gols_gremio[i];

            if(gols_gremio[i] > gols_inter[i]){
                printf("O vencedor foi o gremio!!!\n");
                resultado[i] = 1;
                V_gremio++;
            }else if(gols_gremio[i] == gols_inter[i]){
                printf("O jogo terminou empatado!!!\n");
                resultado[i] = 0;
                empate++;
            }else{
                printf("O vencedor foi o Internacional!!!\n");
                resultado[i] = 2;
                V_inter++;

            }

            printf("Digite 1 se deseja informar outro grenal, senao digite 2 e prossiga:\n");
            scanf("%d",&inicializacao);
            i++;
        }while(inicializacao == 1 && i<447);


    //parte 2 - menu de opções

        printf("\nMenu de Opções\n");
        printf("(1) Listar todos os Grenais\n");
        printf("(2) Listar o resultado de um Grenal\n");
        printf("(3) Visualizar Estatisticas\n");
        printf("(4) Sair\n");
        printf("Escolha uma das opções acima: ");
        scanf("%d",&menu);

        switch(menu){
            case 1:
                printf("\nNro. Grenal || Gols Grêmio || Gols Inter || Resultado\n");
                printf("------------------------------------------------\n");
                for(i=0;i<total_grenais;i++){
                printf("      %d      ||      %d     ||     %d     || ", n_grenal[i], gols_gremio[i], gols_inter[i]);
                    if(resultado[i] == 0){
                        printf("Empate\n");
                    }else if(resultado[i] == 1){
                        printf("Gremio\n");
                    }else{
                        printf("Inter\n");
                    }
                }
                break;

            case 2:
                printf("\nInforme o numero do grenal que deseja ver os resultados: ");
                scanf("%d",&grenal_desejado);
                int encontrado = 0;
                for(i=0;i<total_grenais;i++){
                    if(n_grenal[i] == grenal_desejado){
                        encontrado = 1;
                        printf("\nGrenal %d:\n", n_grenal[i]);
                        printf("Gols do Gremio: %d\n", gols_gremio[i]);
                        printf("Gols do Inter: %d\n", gols_inter[i]);
                        printf("Resultado: ");
                        if(resultado[i] == 0){
                            printf("Empate\n");
                        }else if(resultado[i] == 1){
                            printf("Vitoria do Gremio\n");
                        }else{
                            printf("Vitoria do Inter\n");
                        }
                        break;
                    }
                }
                if(!encontrado){
                    printf("Grenal nao encontrado!\n");
                }
                break;

            case 3:
                Tgols = Tgols_gremio + Tgols_inter;
                printf("\nEstatisticas dos grenais:\n");
                printf("Total de grenais registrados: %d\n", total_grenais);
                printf("Total de gols: %d (Gremio: %d, Inter: %d)\n", Tgols, Tgols_gremio, Tgols_inter);
                printf("Vitorias do Gremio: %d\n", V_gremio);
                printf("Vitorias do Internacional: %d\n", V_inter);
                printf("Empates: %d\n", empate);

                printf("\nTime com mais vitorias: ");
                if(V_gremio > V_inter){
                    printf("Gremio (%d a %d)\n", V_gremio, V_inter);
                }else if(V_inter > V_gremio){
                    printf("Internacional (%d a %d)\n", V_inter, V_gremio);
                }else{
                    printf("Empate tecnico (%d a %d)\n", V_gremio, V_inter);
                }

                printf("\nJogo(s) com mais gols (%d gols no total):\n", maior);
                for(i=0;i<total_grenais;i++){
                    if(gols_jogo[i] == maior){
                        printf("- Grenal %d: Gremio %d x %d Inter\n",
                               n_grenal[i], gols_gremio[i], gols_inter[i]);
                    }
                }
                break;

            case 4:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!!!\n");
                break;
        }
    return 0;
}

