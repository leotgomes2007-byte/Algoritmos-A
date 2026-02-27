#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j;
    int mega_sena[6], aposta[6], acertos = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera os números da Mega-Sena (entre 1 e 60)
    printf("Números sorteados:\n");
    for(i = 0; i < 6; i++) {
        mega_sena[i] = (rand() % 60) + 1;
        printf("%d ", mega_sena[i]);
    }
    printf("\n");

    // Leitura da aposta
    printf("\nInforme sua aposta (6 números entre 1 e 60):\n");
    for(i = 0; i < 6; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &aposta[i]);

        // Validação simples
        while(aposta[i] < 1 || aposta[i] > 60) {
            printf("Número inválido! Digite entre 1 e 60: ");
            scanf("%d", &aposta[i]);
        }
    }

    // Verifica acertos
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            if(aposta[i] == mega_sena[j]) {
                acertos++;
                break;
            }
        }
    }

    // Mostra resultado
    printf("\nVocê acertou %d número(s)!\n", acertos);

    // Mostra os números acertados (opcional)
    if(acertos > 0) {
        printf("Números acertados: ");
        for(i = 0; i < 6; i++) {
            for(j = 0; j < 6; j++) {
                if(aposta[i] == mega_sena[j]) {
                    printf("%d ", aposta[i]);
                    break;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
