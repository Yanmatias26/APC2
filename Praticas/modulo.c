#include <stdio.h>

//Yan Alexandre Matos Matias - 2512082033

void transposta(int m, int n, int A[m][n], int T[n][m]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }
}


void min_max(int n, int vet[n], int *min_idx, int *max_idx) {
    *min_idx = 0;
    *max_idx = 0;

    for (int i = 1; i < n; i++) {
        if (vet[i] < vet[*min_idx]) {
            *min_idx = i;
        }
        if (vet[i] > vet[*max_idx]) {
            *max_idx = i;
        }
    }
}

void modulo(double *x)
{
    if (*x < 0)
        *x = -*x;
    printf("O módulo de %.2f é %.2f\n", *x, *x);
}

int main()
{
    double val = -1;
    modulo(&val);

      int vet[] = {10, 5, 30, -2, 50, 7};
    int n = 6;
    int min_idx, max_idx;

    min_max(n, vet, &min_idx, &max_idx);

    printf("mínimo = %d (valor = %d)\n", min_idx, vet[min_idx]);
    printf("máximo = %d (valor = %d)\n", max_idx, vet[max_idx]);

    int A[2][3] = {{9, 5, -2}, {0, -6, 1}};
    int T[3][2];

    transposta(2, 3, A, T);

    printf("Matriz transposta:\n");
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }


    return 0;
}