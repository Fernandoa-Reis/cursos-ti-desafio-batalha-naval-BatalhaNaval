#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas dos navios (definidas manualmente)
    // Navio horizontal: linha 2, coluna inicial 3
    int linha_h = 2, coluna_h = 3;
    // Navio vertical: linha inicial 4, coluna 5
    int linha_v = 4, coluna_v = 5;

    // Valida posição do navio horizontal
    if (coluna_h + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: Navio horizontal ultrapassa o limite do tabuleiro\n");
        return 1;
    }