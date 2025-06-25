#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    // Variáveis auxiliares para manipulação de coordenadas e direção da embarcação
    char coluna, valorColunaChar;       // 'coluna' para imprimir letras; 'valorColunaChar' para receber entrada do usuário
    int valorLinha, valorColuna;        // Linha e coluna selecionadas pelo jogador
    int vertHonz;                       // Direção da embarcação (1 = vertical, 2 = horizontal)
    int sair;                           // Usada na estrutura do-while para controlar a repetição

    // Inicializa um tabuleiro 10x10 com todos os valores em zero
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

    // Loop principal do jogo
    do {
        // Imprime o cabeçalho com letras A até J para representar as colunas
        coluna = 'A';
        printf(" X");
        for (int j = 0; j < 10; j++) {
            printf(" %c", coluna);
            coluna++;
        }
        printf("\n");

        // Imprime o tabuleiro com os números das linhas (1 a 10) e os valores da matriz
        for (int i = 0; i < 10; i++) {
            if (i < 9)
                printf(" %d ", i + 1);
            else
                printf("%d ", i + 1);

            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }

        // Coleta a posição da linha do jogador
        printf("\nEscolha em qual posicao deseja possicionar seu primeiro navio!!\n0. Para Fechar\n");
        printf("Linha: ");
        scanf("%d", &valorLinha);

        // Encerra o programa se o usuário digitar 0
        if (valorLinha == 0) {
            printf("Saindo do programa até a próxima...\n");
            return 0;
        }

        // Coleta a letra da coluna do jogador (ignora espaços em branco e '\n')
        printf("Coluna: ");
        scanf(" %c", &valorColunaChar);

        // Converte o caractere da coluna para um número de 1 a 10
        switch (valorColunaChar) {
            case 'a': case 'A': valorColuna = 1; break;
            case 'b': case 'B': valorColuna = 2; break;
            case 'c': case 'C': valorColuna = 3; break;
            case 'd': case 'D': valorColuna = 4; break;
            case 'e': case 'E': valorColuna = 5; break;
            case 'f': case 'F': valorColuna = 6; break;
            case 'g': case 'G': valorColuna = 7; break;
            case 'h': case 'H': valorColuna = 8; break;
            case 'i': case 'I': valorColuna = 9; break;
            case 'j': case 'J': valorColuna = 10; break;
            default:
                printf("\nSomente letras de A a J são aceitas!\n");
                return 0;
        }

        // Escolha da direção do navio
        printf("1. Para posicao vertical\n2. Para posicao horizontal\n");
        scanf("%d", &vertHonz);

        // Ajusta os índices para a matriz (matriz começa em 0)
        valorLinha--;
        valorColuna--;

        // Marca a posição principal do navio
        tabuleiro[valorLinha][valorColuna] = 3;

        // Posiciona o restante do navio com base na direção escolhida
        if (vertHonz == 1) {
            tabuleiro[valorLinha - 1][valorColuna] = 3;
            tabuleiro[valorLinha + 1][valorColuna] = 3;
        } else {
            tabuleiro[valorLinha][valorColuna - 1] = 3;
            tabuleiro[valorLinha][valorColuna + 1] = 3;
        }

    } while (sair != 0);  // Como 'sair' nunca é alterado, esse loop só termina com return lá em cima

    printf("Saindo do programa até a próxima...\n");
  

    






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

