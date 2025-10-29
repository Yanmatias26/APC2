#include <stdio.h>

void desenha_imagem(int x, int y, char imagem[n][n]){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%c", imagem[i][j]);
        }
        printf("\n");
    }
}

int main(){

    return 0;
}