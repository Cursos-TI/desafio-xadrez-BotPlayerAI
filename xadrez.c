🏅 Nível Novato
#include <stdio.h>

// Definição de constantes para evitar repetição de valores
#define BISPO_MOVIMENTOS 5
#define TORRE_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8

    int
    main()
{
    // Variável para armazenar a peça escolhida
    int peca;

    // Solicita ao usuário que escolha uma peça
    printf("Escolha uma peça para movimentar:\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("Digite o número correspondente: ");
    scanf("%d", &peca);

    printf("\nMovimentação da peça escolhida:\n");

    // Movimento do Bispo - Usando loop `for`
    if (peca == 1)
    {
        for (int i = 1; i <= BISPO_MOVIMENTOS; i++)
        {
            printf("Diagonal Superior Direita (%d/5)\n", i);
        }
    }
    // Movimento da Torre - Usando loop `while`
    else if (peca == 2)
    {
        int i = 1;
        while (i <= TORRE_MOVIMENTOS)
        {
            printf("Direita (%d/5)\n", i);
            i++;
        }
    }
    // Movimento da Rainha - Usando loop `do-while`
    else if (peca == 3)
    {
        int i = 1;
        do
        {
            printf("Esquerda (%d/8)\n", i);
            i++;
        } while (i <= RAINHA_MOVIMENTOS);
    }
    // Caso o usuário insira um valor inválido
    else
    {
        printf("Peça inválida! Escolha entre 1 (Bispo), 2 (Torre) ou 3 (Rainha).\n");
    }

    printf("\nMovimentação concluída!\n");
    return 0;
}

🏅 Nível Aventureiro
#include <stdio.h>

    int
    main()
{
    int x = 4, y = 4; // Posição inicial do cavalo

    // Movendo 2 casas para baixo (usando for)
    for (int i = 0; i < 2; i++)
    {
        x++;
        printf("Movendo para (%d, %d)\n", x, y);
    }

    // Movendo 1 casa para a esquerda (usando while)
    int i = 0;
    while (i < 1)
    {
        y--;
        printf("Movendo para (%d, %d)\n", x, y);
        i++;
    }

    printf("Posição final do cavalo: (%d, %d)\n", x, y);

    return 0;
}

🥇 Nível Mestre

#include <stdio.h>

    // Função recursiva para movimentação do Bispo (diagonal)
    void
    mover_bispo(int x, int y, int dx, int dy, int passos)
{
    if (passos == 0)
        return; // Caso base da recursão

    for (int i = 1; i <= passos; i++)
    {
        int novo_x = x + dx * i;
        int novo_y = y + dy * i;

        if (novo_x < 1 || novo_x > 8 || novo_y < 1 || novo_y > 8)
            break; // Sai do tabuleiro

        printf("Bispo move para (%d, %d)\n", novo_x, novo_y);
    }

    mover_bispo(x + dx, y + dy, dx, dy, passos - 1);
}

// Função recursiva para movimentação da Torre (linha reta)
void mover_torre(int x, int y, int passos)
{
    if (passos == 0)
        return;

    int novo_x = x + 1;
    if (novo_x > 8)
        return; // Sai do tabuleiro

    printf("Torre move para (%d, %d)\n", novo_x, y);
    mover_torre(novo_x, y, passos - 1);
}

// Função recursiva para movimentação da Rainha (linha reta para esquerda)
void mover_rainha(int x, int y, int passos)
{
    if (passos == 0)
        return;

    int novo_x = x - 1;
    if (novo_x < 1)
        return; // Sai do tabuleiro

    printf("Rainha move para (%d, %d)\n", novo_x, y);
    mover_rainha(novo_x, y, passos - 1);
}

// Função com loops e múltiplas condições para o Cavalo
void mover_cavalo(int x, int y)
{
    int movimentos[8][2] = {
        {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

    for (int i = 0; i < 8; i++)
    {
        int novo_x = x + movimentos[i][0];
        int novo_y = y + movimentos[i][1];

        if (novo_x < 1 || novo_x > 8 || novo_y < 1 || novo_y > 8)
        {
            continue; // Pula movimentos inválidos
        }

        printf("Cavalo move para (%d, %d)\n", novo_x, novo_y);
    }
}

int main()
{
    int x = 4, y = 4;

    printf("Movimentação do Bispo:\n");
    mover_bispo(x, y, 1, 1, 5); // Movendo diagonalmente para cima e direita

    printf("\nMovimentação da Torre:\n");
    mover_torre(x, y, 5); // Movendo 5 casas para a direita

    printf("\nMovimentação da Rainha:\n");
    mover_rainha(x, y, 8); // Movendo 8 casas para a esquerda

    printf("\nMovimentação do Cavalo:\n");
    mover_cavalo(x, y); // Movendo o cavalo em "L"

    return 0;
}