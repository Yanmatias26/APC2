#include <stdio.h>

 void troca(int *p1, int *p2){
        int aux = *p1;
        *p1 = *p2;
        *p2 = aux;
    }
int main(){
    int n1 = 5;
    int n2 = 10;
    troca(&n1, &n2);
    printf("n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}