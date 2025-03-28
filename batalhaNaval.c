#include <stdio.h>

int main() {
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

    int navio_horizontal[3] = {3,3,3};
    int navio_vertical[3] = {3,3,3};
    int cordenada_horizontal[2] = {2, 2};
    int cordenada_vertical[2] = {3, 6};

    if(cordenada_horizontal[0] + 3 > 10 || cordenada_vertical[0] + 3 > 10 || cordenada_horizontal[1] + 3 > 10 || cordenada_vertical[1] + 3 > 10){
        printf("Voce passou dos limites");
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
       tabuleiro[cordenada_horizontal[1]][cordenada_horizontal[0] + i] = navio_horizontal[i];

    }

    for (int i = 0; i <= 3; i++)
    {
        if (tabuleiro[cordenada_vertical[1] + i][cordenada_vertical[0]] == 3) {
            printf("Colisão de navios;\n");
            return 0;  // Corrigido o retorno para `0`
        } else {
            tabuleiro[cordenada_vertical[1] + i][cordenada_vertical[0]] = navio_vertical[i];
        }
        
    }

    

    
    

char cabecalho = 'B';
printf("   A");
    for (int i = 0; i < 9; i++)
    {
        i < 8 ? printf(" %c", cabecalho) : printf(" %c\n", cabecalho);
        cabecalho++;
    }
    
    for (int i = 0; i < 10; i++)
    {
        i < 9  ? printf(" %d ", i + 1) :  printf("%d ", i + 1);
        for (int j = 0; j < 10; j++)
        {
            j == 9 ? printf("%d\n", tabuleiro[i][j]) :  printf("%d ", tabuleiro[i][j]);
        }
        
    }
    

    return 0;
}
