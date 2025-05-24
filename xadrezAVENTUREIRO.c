#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // DECLARAÇÃO DAS VARIÁVEIS
    int bispo;
    int rainha = 0; // Inicializando a variável
    int torre = 0;  // Inicializando a variável
    int movimentos_para_baixo = 2; // Movimento do cavalo (duas casas para baixo)
    int movimentos_para_esquerda = 1; // Movimento do cavalo (uma casa para a esquerda)

    // BOAS-VINDAS
    printf("BEM VINDO AO JOGO DE XADREZ!!!\n");

    // MOVIMENTAÇÃO DO BISPO (estrutura for)
    for (bispo = 0; bispo < 5; bispo++) {
        printf("BISPO : Avante e Para Direita\n");
    }
    printf("----------------------------------------------------------------------\n");

    // MOVIMENTAÇÃO DA RAINHA (estrutura while)
    while (rainha < 8) {
        printf("Rainha: Esquerda\n");
        rainha++;
    }
    printf("----------------------------------------------------------------------\n");

    // MOVIMENTAÇÃO DA TORRE (estrutura do-while)
    do {
        printf("Torre: Direita\n");
        torre++;
    } while (torre < 5);
    printf("----------------------------------------------------------------------\n");

    // MOVIMENTAÇÃO DO CAVALO
    printf("Movimentação do Cavalo:\n");

    // Primeiro movimento: duas casas para baixo (for loop)
    for (int i = 0; i < movimentos_para_baixo; i++) {
        printf("Cavalo: Baixo\n");
    }

    // Segundo movimento: uma casa para a esquerda (while loop)
    int i = 0;
    while (i < movimentos_para_esquerda) {
        printf("Cavalo: Esquerda\n");
        i++;
    }

    return 0;
}