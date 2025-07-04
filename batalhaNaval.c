#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3

// Localização inicial dos navios
//  horizontal
#define linhaH 7
#define colunaH 1
// vertical
#define linhaV 6
#define colunaV 7
// diagonal
#define linhaDiagonal1 0
#define colunaDiagonal1 0

#define linhaDiagonal2 0
#define colunaDiagonal2 (TAM - 1)



int main()
{
    char linha[TAM] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // criando o tabuleiro
    int tabuleiro[TAM][TAM];

    // declarando os navios
    int navioHorizontal[TAM_NAVIO] = {3, 3, 3};
    int navioVertical[TAM_NAVIO] = {3, 3, 3};

    

    for (int i = 0; i < TAM; i++)
    {

        for (int j = 0; j < TAM; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // colocando o navio horizontal
    if (colunaH + 3 <= TAM)
    {
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
        }
    }

    // colocando o navio vertical
    if (colunaV + 3 <= TAM)
    {
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[linhaV + i][colunaV] = navioVertical[i];
        }
    }

    // colocando dois navios na diagonal
    if(linhaDiagonal1 + 3 <= TAM && colunaDiagonal1 + 3 <= TAM){
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = navioHorizontal[i];
        }
    }

    if (linhaDiagonal2 + TAM_NAVIO <= TAM && colunaDiagonal2 - TAM_NAVIO + 1 >= 0)
    {
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] = navioHorizontal[i];
        }
    }

    // imprimindo o tabuleiro
    printf("========== Batalha Naval ==========\n\n");
    printf("   ");
    for (int j = 0; j < TAM; j++)
    {
        printf("%d ", j + 1);
    }

    printf("\n");

    for (int i = 0; i < TAM; i++)
    {
        printf("%c  ", linha[i]); // Letra da linha
        for (int j = 0; j < TAM; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}