#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

//DECLARAÇÃO DAS VARIÁVEIS
    int bispo;
    int rainha;
    int torre;

//MOVIMENTANDO CADA PEÇA

printf("BEM VINDO AO JOGO DE XADREZ!!!\n");

for (bispo = 0; bispo < 5; bispo++){
    printf("BISPO : Avante e Para Direita\n"); //imprime direção da peça bispo estrutura for
}
printf("----------------------------------------------------------------------\n");

while (rainha<8)
{
    printf("Rainha: Esquerda\n", rainha); //imprime direção da peça rainha estrutura while
    rainha++;                            
}

printf("-----------------------------------------------------------------------\n");

do
{
    printf("Torre: Direita\n",torre);   //imprime direção da peça torre estrutura do while
    torre++;
} while (torre<5);



    return 0;
}