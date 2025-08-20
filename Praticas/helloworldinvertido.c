#include <stdio.h>
#include <string.h>

int main (){
    char string[12] ="hello world";
    char *p1 = string;
    char *p2 = string + strlen(string) - 1;

    while(p1 < p2){
        char temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }

    printf("String invertida: %s\n", string);
    
    return 0;
}