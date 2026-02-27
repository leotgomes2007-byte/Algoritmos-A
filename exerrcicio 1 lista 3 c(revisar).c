#include <stdio.h>

int main() {
    float peso, contar = 0, media, peso_maior = -1, peso_menor = 9999;
    int i, n_identificacao, n_identificacaoMaior = 0, n_identificacaoMenor = 0;

    for (i = 1; i <= 20; i++) {
        printf("Informe o numero de identificacao do boi:\n");
        scanf("%d", &n_identificacao);
        printf("Informe o peso do boi:\n");
        scanf("%f", &peso);

        contar += peso;

        if (peso > peso_maior) {  // Verifica o MAIOR peso
            peso_maior = peso;
            n_identificacaoMaior = n_identificacao;
        }
        if (peso < peso_menor) {  // Verifica o MENOR peso
            peso_menor = peso;
            n_identificacaoMenor = n_identificacao;
        }
    }

    media = contar / 20;
    printf("O boi mais pesado eh %d com %.2f kg\n", n_identificacaoMaior, peso_maior);
    printf("O boi mais leve eh %d com %.2f kg\n", n_identificacaoMenor, peso_menor);
    printf("A media de peso dos 20 bois eh %.2f\n", media);

    return 0;
}
