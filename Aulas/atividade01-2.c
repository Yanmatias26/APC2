#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "aula de apc II";

    int i = 0;

    while(*(str + i) != '\0'){
        printf("%c", *(str + i));
        i++;
    }
    printf("\n");

    return 0;
}