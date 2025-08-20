#include <stdio.h>

int main (){
    char string[12] = "Hello World";
    printf("%s\n", string);
    char *p1 = string;
    
    while (*p1 != '\0') {
        p1++;
    }
    printf("%d\n", p1 - string);

    return 0;
}