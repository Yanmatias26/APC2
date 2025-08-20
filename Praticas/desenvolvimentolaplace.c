#include <stdio.h>

int determinante(int matriz[10][10], int n) {
    int det = 0;
    if (n == 1) {
        return matriz[0][0];
    } else if (n == 2) {
        return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    } else {
        for (int i = 0; i < n; i++) {
            int submatriz[10][10];
            for (int j = 1; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (k < i) {
                        submatriz[j - 1][k] = matriz[j][k];
                    } else if (k > i) {
                        submatriz[j - 1][k - 1] = matriz[j][k];
                    }
                }
            }
            det += matriz[0][i] * determinante(submatriz, n - 1) * (i % 2 == 0 ? 1 : -1);
        }
    }
    return det;
}

int main(){
    //Determinar o tamanho da matriz
    printf("Digite um valor para a matriz simetrica\n");
    int n;
    scanf("%d", &n);
    while(getchar()!='\n');
    int matriz[n][n];
    // Loop para preencher os elementos da matriz simetrica
    printf("Digite os elementos da matriz simetrica:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i >= j){
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
                while(getchar()!='\n');
                matriz[j][i] = matriz[i][j];
            }
        }
    }
    // Impressão da matriz
    printf("Matriz simetrica:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Determinante da matriz simetrica: %d\n", determinante(matriz, n));
    return 0;
}