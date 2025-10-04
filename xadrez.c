#include <stdio.h>
int main () {
    // Mover o Bispo 5 casas para a direita e frente
    printf("Bispo:\n");
    int i = 0; while (i <= 4)
    {printf("Direita e cima\n"); i++; // Imprime a direção do movimento
    }
    
    // Mover a Torre 5 casas para frente
    printf("\n");
    printf("Torre:\n");
    for (int i = 0; i < 5; i++) {
    printf("Cima\n"); // Imprime a direção do movimento
    }
    
    // Mover a Rainha 8 casas para a esquerda
    printf("\n");
    printf("Rainha:\n");
    i = 0; do {printf("Esquerda\n", i); i++;} while (i <= 7); // Imprime a direção do movimento

    int movimentoCompleto = 1; // Flag para controlar o movimento em 'L'
    printf("\n");
    printf("Cavalo:\n");
    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++){
            printf("Cima\n"); //Imprime "Cima" duas vezes
        }
        printf("Direita\n"); //Imprime "Direita" uma vez
    }

    return 0;
}  
