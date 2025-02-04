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