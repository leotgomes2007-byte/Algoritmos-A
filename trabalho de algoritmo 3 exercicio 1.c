#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //variaveis
    int i, j, m, n, menu, maior=1, Lmaior=-1, Cmaior=-1;

    // Menu
    printf("Menu de opcoes:\n");
    printf("(1) Inserir matriz\n");
    printf("(2) Gerar matriz\n");
    printf("Escolha: ");
    scanf("%d", &menu);

    // Tamanho da matriz
    printf("Informe o tamanho da matriz:\n");
    printf("Linhas: ");
    scanf("%d", &m);
    printf("Colunas: ");
    scanf("%d", &n);

    int a[m][n], b[m][n], u[m][n], d[m][n];
    int linha[m], coluna[n];

    // Criação da matriz
    switch(menu) {
        case 1:
            printf("Informe a matriz desejada (apenas 0 e 1):\n");
            for(i = 0; i < m; i++) {
                for(j = 0; j < n; j++) {
                    do {
                        printf("a[%d][%d]: ", i, j);
                        scanf("%d", &a[i][j]);
                    } while(a[i][j] != 0 && a[i][j] != 1);
                }
            }
            break;

        case 2:
            srand(time(NULL));
            for(i = 0; i < m; i++) {
                for(j = 0; j < n; j++) {
                    a[i][j] = rand() % 2;
                }
            }
            break;

        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Representação numérica
    printf("\nRepresentacao numerica:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Representação gráfica
    printf("\nRepresentacao grafica:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j]==0) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    //segunda matriz
    printf("\nInsira outra matriz %d x %d (composta apenas por 0 e 1 novamente):\n", m, n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            do {
                printf("b[%d][%d]: ", i, j);
                scanf("%d", &b[i][j]);
            } while(b[i][j] != 0 && b[i][j] != 1);
        }
    }

    //comparação matrizes
    maior = 1;
    for(i = 0; i < m && maior; i++) {
        for(j = 0; j < n && maior; j++) {
            if(a[i][j] != b[i][j]) {
                maior = 0;
            }
        }
    }

    // Representação gráfica das duas matrizes
    printf("\nMatriz A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j]==0) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(b[i][j]==0) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    if(maior == 0) {
        printf("\nAs matrizes sao diferentes\n");
    } else {
        printf("\nAs matrizes sao iguais\n");
    }

    //união das matrizes
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            u[i][j] = a[i][j] || b[i][j];
        }
    }

    printf("\nA uniao das duas matrizes eh:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(u[i][j]==0) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    // diferença matrizes (A - B)
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            d[i][j] = (a[i][j] == 1 && b[i][j] == 0) ? 1 : 0;
        }
    }

    printf("\nA diferenca entre as duas matrizes (A - B) eh:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(d[i][j]==0) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    // Contar pixels ligados por linha e coluna
    // Inicializar contadores
    for(i = 0; i < m; i++) linha[i] = 0;
    for(j = 0; j < n; j++) coluna[j] = 0;

    // Contar
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] == 1) {
                linha[i]++;
                coluna[j]++;
            }
        }
    }

    // Encontrar linha com mais pixels ligados
    Lmaior = 0;
    for(i = 1; i < m; i++) {
        if(linha[i] > linha[Lmaior]) {
            Lmaior = i;
        }
    }

    // Encontrar coluna com mais pixels ligados
    Cmaior = 0;
    for(j = 1; j < n; j++) {
        if(coluna[j] > coluna[Cmaior]) {
            Cmaior = j;
        }
    }

    printf("\nA linha com mais pixels ligados eh %d (com %d pixels ligados)\n", Lmaior, linha[Lmaior]);
    printf("A coluna com mais pixels ligados eh %d (com %d pixels ligados)\n", Cmaior, coluna[Cmaior]);

    return 0;
}
