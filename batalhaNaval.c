#include <stdio.h>  // Inclusão da biblioteca padrão de entrada e saída

int main() {
    // Variáveis auxiliares para impressão do tabuleiro
    char linha;      // Usada para imprimir as letras das colunas (A, B, C, ...)
    int coluna;      // (Não usada diretamente neste código)

    // Inicialização do tabuleiro 10x10 com todos os valores zerados
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    // Impressão da linha superior com as letras (A a J) representando as colunas
    for (int i = 0; i < 1; i++) {
        linha = 'A';             // Começa pela letra A
        printf(" X");            // Espaço reservado para os índices das linhas (1 a 10)
        for (int j = 0; j < 10; j++) {
            printf(" %c", linha); // Imprime letras A até J
            ++linha;              // Avança para a próxima letra
        }
        printf("\n");            // Quebra de linha após imprimir os títulos das colunas
    }

    // Impressão do tabuleiro com os valores (todos 0) e a numeração das linhas (1 a 10)
    for (int i = 0; i < 10; i++) {
        // Imprime o número da linha (alinhado corretamente)
        if (i < 9) {
            printf(" %d ", i + 1);   // Espaço extra para alinhar números de 1 dígito
        } else {
            printf("%d ", i + 1);    // Sem espaço extra para o número 10
        }

        // Imprime os valores da linha do tabuleiro
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");  // Quebra de linha ao fim da linha do tabuleiro
    }


    


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
   // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

