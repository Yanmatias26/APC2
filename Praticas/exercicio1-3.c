#include <stdio.h>

int main(){
    int n1 = 3, n2 = 5;
    int *p1 = &n1, *p2 = &n2;
    p1 = &n2;
    p2 = &n1;

    printf("n1: %d, n2: %d\n", *p1, *p2);

    return 0;
}