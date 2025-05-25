#include <stdio.h>

int main(){
    // Movimentar peça TORRE 5 casas para direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
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

    printf("\n");

   
    // Movimentar peça CAVALO
    // Movimento em "L": 2 para baixo + 1 para esquerda
   

    // Constantes para movimento
    int passosBaixo = 2;
    int passosEsquerda = 1;

    // Loop externo (for) para o número de movimentos (vamos mover o Cavalo 1 vez)
    for (int movimento = 0; movimento < 1; movimento++) {
        // Loop interno (while) para mover 2 casas para baixo
        int i = 0;
        while (i < passosBaixo) {
            printf("Baixo\n");
            i++;
        }

        // Após mover para baixo, mover 1 casa para esquerda
        printf("Esquerda\n");
    }

    return 0;
}