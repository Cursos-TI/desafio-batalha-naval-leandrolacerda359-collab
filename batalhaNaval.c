#include <stdio.h>

// Desafio Batalha Naval - MateCheck


int main() {
    
    //Variáveis
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}
    };
    int navioUm[3] = {1,1,1}, navioDois[3] = {2,2,2}, navioTres[3] = {3,3,3}, navioQuatro[3] = {4,4,4};
    int posInicial = 0;

    //Posicionamento no tabuleiro 'navioUm'
    posInicial = 5;
    for(int i=0;i<3;i++) {
        tabuleiro[4][posInicial] = navioUm[i];
        posInicial++;
    }

    //Posicionamento no tabuleiro 'navioDois'
    posInicial = 6;
    for(int i=0;i<3;i++) {
        tabuleiro[posInicial][3] = navioDois[i];
        posInicial++;
    }

    //Posicionamento no tabuleiro 'navioTres'
    posInicial = 0;
    for(int i=0;i<3;i++) {
        tabuleiro[posInicial][posInicial] = navioTres[i];
        posInicial++;
    }

    //Posicionamento no tabuleiro 'navioQuatro'
    posInicial = 9;
    for(int i=0;i<3;i++) {
        tabuleiro[posInicial][posInicial] = navioTres[i];
        posInicial--;
    }
    
    //Exibição do tabuleiro
    printf(" *** BATALHA NAVAL ***\n\n");
    for(int lin=0;lin<10;lin++) {
        for(int col=0;col<10;col++) {
            printf("%d",tabuleiro[lin][col]); printf(" ");
        }
        printf("\n"); 
    } printf("\n\n");

    return 0;
}
