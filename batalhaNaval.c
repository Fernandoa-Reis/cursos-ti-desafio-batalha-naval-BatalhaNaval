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

    // Valida posição do navio vertical
    if (linha_v + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: Navio vertical ultrapassa o limite do tabuleiro\n");
        return 1;
    } 

    // Valida sobreposição
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha_h][coluna_h + i] != 0 ||
            tabuleiro[linha_v + i][coluna_v] != 0) {
            printf("Erro: Navios se sobrepoem\n");
            return 1;
        }
    }

      // Posiciona navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_h][coluna_h + i] = 1; // Valor 1 representa navio
    }
    
    // Posiciona navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_v + i][coluna_v] = 1; // Valor 1 representa navio
    }

    // Exibe coordenadas dos navios
    printf("Coordenadas do Navio Horizontal:\n");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("(%d, %d) ", linha_h, coluna_h + i);
    }
    
    printf("\n\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("(%d, %d) ", linha_v + i, coluna_v);
    }
    
    return 0;
}