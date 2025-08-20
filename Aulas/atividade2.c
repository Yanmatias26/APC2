#include <stdio.h>

int main()
{
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int *resposta = 0;
    int (*pnum)[4] = num;
    for (int lin = 0; lin < 3; lin++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("num[%d][%d] = %d\n", lin, col, pnum[lin][col]);
            if (pnum[lin][col] % 2 == 0)
            {
            }
        }
    }
    for (int lin = 0; lin < 3; lin++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (pnum[lin][col] % 2 == 0)
            {

                int soma = 0;
                int cont = 0;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (pnum[i][j] % 2 == 0)
                        {
                            soma += pnum[i][j];
                            cont++;
                        }
                    }
                }
                if (cont > 0)
                {
                    printf("Media dos pares = %d\n", soma / cont);
                    return 0;
                }
            }
        }
    }

    return 0;
}