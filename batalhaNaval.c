#include <stdio.h> 

int main() {
    // Definindo o tabuleiro 10x10 e inicializando todas as posições com 0 (vazio)
    int tabuleiro[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    // Matrizes das habilidades em 5x5
    int habilidade_cone[5][5] = {{0, 0, 0, 0, 0},
                                 {0, 0, 1, 0, 0},
                                 {0, 1, 1, 1, 0},
                                 {1, 1, 1, 1, 1},
                                 {0, 0, 0, 0, 0}};
    
    int habilidade_cruz[5][5] = {{0, 0, 1, 0, 0},
                                 {0, 0, 1, 0, 0},
                                 {1, 1, 1, 1, 1},
                                 {0, 0, 1, 0, 0},
                                 {0, 0, 1, 0, 0}};
    
    int habilidade_octaedro[5][5] = {{0, 0, 1, 0, 0},
                                     {0, 1, 1, 1, 0},
                                     {1, 1, 1, 1, 1},
                                     {0, 1, 1, 1, 0},
                                     {0, 0, 1, 0, 0}};

    // Coordenadas para as habilidades
    int x_cone = 2, y_cone = 2;       // Cone no centro do tabuleiro
    int x_cruz = 5, y_cruz = 5;       // Cruz no centro do tabuleiro
    int x_octaedro = 7, y_octaedro = 7;  // Octaedro no centro do tabuleiro

    // Aplicando a habilidade Cone (numero 1) no tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int tabX = x_cone + i - 2; // Ajusta para o centro da habilidade
            int tabY = y_cone + j - 2; // Ajusta para o centro da habilidade
            if (tabX >= 0 && tabX < 10 && tabY >= 0 && tabY < 10 && habilidade_cone[i][j] == 1) {
                tabuleiro[tabX][tabY] = 1;  // Habilidade cone
            }
        }
    }

    // Aplicando a habilidade Cruz (numero 2) no tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int tabX = x_cruz + i - 2; // Ajusta para o centro da habilidade
            int tabY = y_cruz + j - 2; // Ajusta para o centro da habilidade
            if (tabX >= 0 && tabX < 10 && tabY >= 0 && tabY < 10 && habilidade_cruz[i][j] == 1) {
                tabuleiro[tabX][tabY] = 2;  // Habilidade cruz
            }
        }
    }

    // Aplicando a habilidade Octaedro (numero 3) no tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int tabX = x_octaedro + i - 2; // Ajusta para o centro da habilidade
            int tabY = y_octaedro + j - 2; // Ajusta para o centro da habilidade
            if (tabX >= 0 && tabX < 10 && tabY >= 0 && tabY < 10 && habilidade_octaedro[i][j] == 1) {
                tabuleiro[tabX][tabY] = 3;  // Habilidade octaedro
            }
        }
    }

    // Exibindo o cabeçalho do tabuleiro com letras (A, B, C, etc.)
    printf("   A B C D E F G H I J\n");

    // Exibindo o tabuleiro (linhas numeradas de 1 a 10)
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Imprime os números de 1 a 10 na primeira coluna
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime os valores do tabuleiro (0, 1, 2 ou 3)
        }
        printf("\n");
    }

    return 0;
}
