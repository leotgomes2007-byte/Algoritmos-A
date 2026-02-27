#include<stdio.h>

int main() {
    int i = 0, n;
    char s[47], nova[47];

    printf("Escreva uma palavra qualquer: ");
    scanf("%s", s);

    printf("Informe um numero (representa os caracteres a remover): ");
    scanf("%d", &n);

    // Encontra o final da string original
    while(s[i] != '\0') {
        i++;
    }

    // Verifica se n é válido
    if(n >= i) {
        printf("O numero eh maior ou igual ao tamanho da palavra!\n");
        return 1;
    }

    // Copia os caracteres a partir de n
    int j = 0;
    while(s[n] != '\0') {
        nova[j] = s[n];
        n++;
        j++;
    }
    nova[j] = '\0'; // Termina a nova string

    printf("Nova palavra: %s\n", nova);

    return 0;
}
