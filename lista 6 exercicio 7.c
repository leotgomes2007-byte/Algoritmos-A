#include <stdio.h>

int main() {
    int i, j, tam = 0;
    char s[47], inv[47];
    int eh_palindromo = 1;

    printf("Informe uma palavra (ver se é palindromo): ");
    scanf("%s", s);


    while (s[tam] != '\0') {
        tam++;
    }


    j = 0;
    for (i = tam - 1; i >= 0; i--) {
        inv[j] = s[i];
        j++;
    }
    inv[j] = '\0';

    // Compara a string original com a invertida
    for (i = 0; i < tam; i++) {
        if (s[i] != inv[i]) {
            eh_palindromo = 0;
            break;
        }
    }

    if (eh_palindromo) {
        printf("A palavra informada é um palindromo\n");
    } else {
        printf("A palavra informada não é um palindromo\n");
    }

    return 0;
}
