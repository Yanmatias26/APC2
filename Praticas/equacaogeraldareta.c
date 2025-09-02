#include <stdio.h>
#include <stdlib.h>
//Theo Torres 2512082021
//Yan Alexandre 2512082033

void exibir_equacao_geral_da_reta(double x1, double y1, double x2, double y2){
    double a = y2 - y1;
    double b = x1 - x2;
    double c = (x2 * y1) - (x1 * y2);
    printf("A equacao geral da reta que passa pelos pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.2fx + %.2fy + %.2f = 0\n", x1, y1, x2, y2, a, b, c);

    if(b != 0){
        float m = -a / b;
        float n = -c / b;
        printf("A equacao reduzida da reta eh: y = %.2fx + %.2f\n", m, n);
    } else {
        printf("A reta eh vertical(x = valor) e nao define uma funcao y=f(x)\n");
    }
}

double valor_y(double x1, double y1, double x2, double y2, double x){
    double a = y2 - y1;
    double b = x1 - x2;
    double c = (x2 * y1) - (x1 * y2);
    if(b != 0){
        float m = -a / b;
        float n = -c / b;
        float y = m * x + n;
        printf("y = %.2f\n", y);
        //return y; //nao deu certo
        //pedir pro professor explicar o porque nao retornou o valor
    } else {
        printf("A reta eh vertical(x = valor) e nao define uma funcao y=f(x)\n");
        exit(1);
    }
}

char tela[60][20];

void limpar_tela(){
    for(int i=0; i<60*20; i++){
        *(tela[0] + i) = ' ';
    }
}

void desenhar_reta(int x1, int y1, int x2, int y2) {
    for (int x = x1; x <= x2; x++) {
        double m = (double)(y2 - y1) / (double)(x2 - x1);
        double b = y1 - m * x1;
        int y = (int)(m * x + b);

        if (x >= 0 && x < 60 && y >= 0 && y < 20) {
            tela[y][x] = '@'; 
    }
}
}

void mostrar_tela(){
    for(int y = 0; y < 20; y++){
        for(int x = 0; x < 60; x++){
            printf("%c", tela[y][x]);
        }
        printf("\n");
    }
}

void desenhar_triangulo(int x1, int y1, int x2, int y2, int x3, int y3){

    desenhar_reta(x1, y1, x2, y2);
    desenhar_reta(x2, y2, x3, y3);
    desenhar_reta(x3, y3, x1, y1);
}




int main(){
    exibir_equacao_geral_da_reta(1, 2, 3, 4);
    
    valor_y(5, 2, 3, 4, 5);

    limpar_tela();
    desenhar_reta(5, 2, 8, 4);
    mostrar_tela();
    limpar_tela();
    desenhar_triangulo(5, 2, 8, 4, 10, 1);
    mostrar_tela();


    return 0;
    // nao sei porque ta imprimindo tres vezes
    //tentei de td jeito mudar, mas n foi
}