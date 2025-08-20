#include <stdio.h>

int main(){
    char str[] = {"Hello world"};
    int i = 0;
    while(*(str + i) != '\0'){
        printf("%c", *(str + i));
        i++;
    }
    printf("\n");
    printf("o tamanho da string e: %d\n", i);
    

    return 0;
}