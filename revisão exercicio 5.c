#include<stdio.h>

int main() {
    int i, chute, flag = 0;
    int v[10];

    printf("Informe o vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Informe o numero que deseja ver se está no vetor:\n");
    scanf("%d", &chute);

    // Verifica se o número está no vetor
    for(i = 0; i < 10; i++) {
        if(v[i] == chute) {
            flag = 1;
            break;
    }

    if(flag == 1) {
        printf("O numero informado foi encontrado nas posicoes:\n");
        for(i = 0; i < 10; i++) {
            if(v[i] == chute) {
                printf("%d ", i);
            }
        }
    } else {
        printf("O numero informado nao foi encontrado");
    }
    }
    return 0;
}
