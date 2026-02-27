#include<stdio.h>
#include<ctype.h> // Para toupper()

int main() {
    int i, tam = 0, flag = 0;
    char p[47];

    printf("Escreva uma palavra aleatoria: ");
    scanf("%s", p);

    // Calcula o tamanho da palavra
    for(i = 0; p[i] != '\0'; i++) {
        tam++;
    }

    // Verifica se começa com 'A' ou 'a'
    if(toupper(p[0]) == 'A') {
        flag = 1;
    }

    if(flag == 1) {
        // Imprime na ordem inversa (sem incluir o '\0')
        printf("Palavra invertida: ");
        for(i = tam-1; i >= 0; i--) {
            printf("%c", p[i]);
        }
    } else {
        // Substitui vogais por *
        for(i = 0; p[i] != '\0'; i++) {
            if(toupper(p[i]) == 'A' || toupper(p[i]) == 'E' ||
               toupper(p[i]) == 'I' || toupper(p[i]) == 'O' ||
               toupper(p[i]) == 'U') {
                p[i] = '*';
            }
        }
        printf("Palavra com vogais substituidas: %s", p);
    }

    return 0;
}
