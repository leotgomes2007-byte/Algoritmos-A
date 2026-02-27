#include<stdio.h>

int main() {
    int i;
    char s[47], subs, letra;

    printf("Informe uma palavra: ");
    scanf("%s", s);

    printf("Informe uma letra para ser substituida: ");
    scanf(" %c", &subs);

    printf("Informe a letra que vai substitui-la: ");
    scanf(" %c", &letra);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == subs) {
            s[i] = letra;
        }
    }

    printf("A nova palavra ficou: %s\n", s);

    return 0;
}
