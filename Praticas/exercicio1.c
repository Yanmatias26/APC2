#include <stdio.h>

int main(){
    int i;
    printf("digite um numero:\n");
    scanf("%d", &i);
    int *p = &i;
    printf("&p: %p\n", &p);
    printf("p (&i - endereco): %p\n", p);
    printf("*p (i -     valor de i ): %d\n", *p);

    return 0;
}