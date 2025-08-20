#include <stdio.h>

int main (){
    char vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i= 0; i < 10; i++){
        printf("vet[%d]\n", *(vet+i));
    }

    return 0;
}