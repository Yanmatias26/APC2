#include <stdio.h>

//sum(n) = 1 + 2 + 3 + ...(n-1) + n; = |sum(n-1) + n n > 1;|
//sum(6) = 1+2+3+4+5+6 =               |sum(6) + sum(5);   |
//sum(5) = 1+2+3+4+5 =                 |sum(5) + sum(4);   |
//sum(4) = 1+2+3+4 =                   |sum(4) + sum(3);   |
//sum(3) = 1+2+3 =                     |sum(3) + sum(2);   |
//sum(2) = 1+2 =                       |sum(2) + sum(1);   |
//sum(1) = 1;

//definicao recursiva:
//sum(n) = {sum n(n-1) + n, para todo n > 1};
//         {1,                     se n = 1};
int sum(int n){
    if(n > 1){
        return sum(n-1) + n;
    }
    if(n == 1){
        return 1;
    }
    return 0; //exceção

}


int main(){
    int resultado = sum(6);
    printf("O resultado da sum(6) é: %d\n", resultado);

    return 0;
}