#include <stdio.h>

void imprime_linha(int n) {
    for(int i = 1; i <= n; i++) {
        printf("*");
    } 
    printf("\n");
}

int main(){
    imprime_linha(1);
    imprime_linha(2);
    imprime_linha(3);
    return 0;
}
