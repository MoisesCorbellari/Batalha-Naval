#include <stdio.h>

int main(){
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    //criando o tabuleiro
    int tabuleiro[10][10];

    for (int i = 0; i < 10 ; i++){

        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    //declarando os navios
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    //Localização inicial dos navios
    int linhaH = 2;
    int colunaH = 2;

    int linhaV = 5;
    int colunaV = 7;

    // colocando o navio horizontal
    if (colunaH + 3 <= 10){
        for(int i = 0; i < 3; i++){
            tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];

        }
    }

    //colocando o navio vertical
    if (colunaV + 3 <= 10){
        for(int i=0; i < 3; i++){
            tabuleiro[linhaV + i][colunaV] = navioVertical[i];
        }
    }

    // imprimindo o tabuleiro
    printf("========== Batalha Naval ==========\n\n");
    printf("   ");
    for(int j = 0; j<10; j++){
        printf("%d ", j+1);
    }
    
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]);  // Letra da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;

}