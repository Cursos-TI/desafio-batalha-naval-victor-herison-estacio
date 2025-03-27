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

    int navio_horizontal[3], navio_vertical[3] = {3,3,3};
    int cordenada_horizontal[2] = {5, 2};
    int  cordenada_vertical[2] = {3, 3};

    if(cordenada_horizontal[0] + 3 > 9 || cordenada_vertical[0] + 3 > 9 || cordenada_horizontal[1] + 3 > 9 || cordenada_vertical[1] + 3 > 9){
        printf("Voce passou dos limites");
        return;
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
