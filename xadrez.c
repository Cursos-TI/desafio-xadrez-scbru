#include <stdio.h>

int main(){
    // Movimentar peça TORRE 5 casas para direita
    for (int i = 0; i < 5; i++) {
        printf("Frente\n");
    }

        printf("\n");
    // Movimentar peça BISPO 5 casas na diagonal
    for (int i = 0; i < 5; i++) {
        printf("Cima Direita\n");
    }

    printf("\n");
    // Movimentar peça RAINHA 8 casas para a esquerda
    for (int i = 0; i < 8; i++) {
        printf("Esquerda\n");
    }

    return 0;
}