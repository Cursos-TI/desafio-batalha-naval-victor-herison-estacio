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

    // Definindo dois navios: um horizontal e um vertical, ambos de tamanho 3
    int navio_horizontal[3] = {3,3,3};
    int navio_vertical[3] = {3, 3, 3};  
    int  navio_diagonal[3] = {3, 3, 3};   

    // Coordenadas iniciais para posicionar os navios horizontal e verticalmente no tabuleiro
    int cordenada_horizontal[2] = {0, 0};  // Coordenada (x, y) para o navio horizontal
    int cordenada_vertical[2] = {1, 2};    // Coordenada (x, y) para o navio vertical
    int cordenada_diagonal1[2] = {2, 6};
    int cordenada_diagonal2[2] = {7, 4};

    // Verificação de limites para garantir que os navios não ultrapassem as bordas do tabuleiro
    for (int i = 0; i < 2; i++)
    {
        if (cordenada_horizontal[i] + 3 > 10 || cordenada_vertical[i] + 3 > 10 ||
            cordenada_diagonal1[i] + 3 > 10 || cordenada_vertical[i] + 3 > 10) {
            printf("Você passou dos limites\n");
            return 0;  // Encerra o programa se as coordenadas estiverem fora dos limites
        }
    }
    
    

    // Posicionando o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[cordenada_horizontal[0]][cordenada_horizontal[1] + i] = navio_horizontal[i];
        // Incrementa a posição horizontal e coloca o valor "3" nas casas consecutivas
    }

    // Posicionando o navio vertical no tabuleiro com verificação de colisão
    for (int i = 0; i < 3; i++) {  // Corrigido de i <= 3 para i < 3
        if (tabuleiro[cordenada_vertical[0] + i][cordenada_vertical[1]] == 3) {
            printf("Colisão de navios, VERTICAL;\n");
            return 0;  // Encerra o programa caso haja colisão de navios
        } else {
            tabuleiro[cordenada_vertical[0] + i][cordenada_vertical[1]] = navio_vertical[i];
            // Incrementa a posição vertical e coloca o valor "3" nas casas consecutivas
        }
    }

    // Posicionando o navio diagonal 1 no tabuleiro com verificação de colisão
    for (int i = 0; i < 3; i++) {  // Corrigido de i <= 3 para i < 3
        if (tabuleiro[cordenada_diagonal1[0] + i][cordenada_diagonal1[1] + i] == 3) {
            printf("Colisão de navios DIAGONAL 1;\n");
            return 0;  // Encerra o programa caso haja colisão de navios
        } else {
            tabuleiro[cordenada_diagonal1[0] + i][cordenada_diagonal1[1] + i] = navio_diagonal[i];
            // Incrementa a posição vertical e coloca o valor "3" nas casas consecutivas
        }
    }

    // Posicionando o navio diagonal 2 no tabuleiro com verificação de colisão
    for (int i = 0; i < 3; i++) {  // Corrigido de i <= 3 para i < 3
        if (tabuleiro[cordenada_diagonal2[0] + i][cordenada_diagonal2[1] + i] == 3) {
            printf("Colisão de navios DIAGONAL 2;\n");
            return 0;  // Encerra o programa caso haja colisão de navios
        } else {
            tabuleiro[cordenada_diagonal2[0] + i][cordenada_diagonal2[1] + i] = navio_diagonal[i];
            // Incrementa a posição vertical e coloca o valor "3" nas casas consecutivas
        }
    }

    // Exibindo o cabeçalho do tabuleiro com letras (A, B, C, etc.)
    char cabecalho = 'B';
    printf("   A");  // Imprime "A" manualmente antes do loop para começar corretamente
    for (int i = 0; i < 9; i++) {
        // Imprime as letras B até J, formatando para exibir na mesma linha
        i < 8 ? printf(" %c", cabecalho) : printf(" %c\n", cabecalho);
        cabecalho++;  // Avança para a próxima letra
    }

    // Exibindo o tabuleiro (linhas numeradas de 1 a 10)
    for (int i = 0; i < 10; i++) {
        // Imprime os números de 1 a 10 na primeira coluna
        i < 9 ? printf(" %d ", i + 1) : printf("%d ", i + 1);
        for (int j = 0; j < 10; j++) {
            // Imprime os valores do tabuleiro (0 ou 3) formatados
            j == 9 ? printf("%d\n", tabuleiro[i][j]) : printf("%d ", tabuleiro[i][j]);
        }
    }

    return 0;
}
