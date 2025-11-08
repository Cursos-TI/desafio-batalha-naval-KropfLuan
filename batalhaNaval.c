#include <stdio.h>

int main (){

    int c [10] = {1,2,3,4,5,6,7,8,9,10}; // Declaração dos números para as linhas
    char l [10] = {'A','B','C','D','E','F','G','H','I','J'}; // Declaração das letras para as colunas
    int tabuleiro[10][10] = {0}; // Declaração e inicialização do tabuleiro 10x10

    // Navios são representados pelo número 3 no tabuleiro 

    tabuleiro[2][3] = 3; // Exemplo de posicionamento de um navio na posição D3
    tabuleiro[2][4] = 3; // Exemplo de posicionamento de um navio na posição E4
    tabuleiro[2][5] = 3; // Exemplo de posicionamento de um navio na posição F5
    
    tabuleiro[5][7] = 3; // Exemplo de posicionamento de um navio na posição H6
    tabuleiro[6][7] = 3; // Exemplo de posicionamento de um navio na posição H7
    tabuleiro[7][7] = 3; // Exemplo de posicionamento de um navio na posição H8

    // Imprimir o tabuleiro com linhas e colunas rotuladas

    for (int i = 0; i < 10; i++){
        printf (" ");
        printf ("%c", l [i]);
    } // Imprime as letras no topo do tabuleiro
    printf ("\n");
    for (int linha = 0; linha < 10; linha++){
        printf ("%d ", c [linha]); // Imprime os números na lateral do tabuleiro
        for (int coluna = 0; coluna < 10; coluna++){
            printf ("%d ", tabuleiro [linha][coluna]);
            } // Imprime os elementos do tabuleiro
            
            printf("\n");       
    }
        
        return 0;
}