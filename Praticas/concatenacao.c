#include <stdio.h>

int main (){
    char *p1 = "hello";
    char *p2 = " world";
    char resultado[12];

    char *p = resultado;

    while(*p1 != '\0'){
        *p = *p1;
        p++;
        p1++;
    }
    while(*p2 != '\0'){
        *p = *p2;
        p++;
        p2++;
    }
    *p = '\0';

    printf("A string concatenada:%s\n", resultado);

    return 0;
}