#include <stdio.h>

void divisivelpor2(int numero){
    if(numero % 2 == 0){
        printf("1\n");
    }
    if(numero % 2 != 0){
        printf("0\n");
    }
}

int main(){
    divisivelpor2(1);
    divisivelpor2(2);

    return 0;
}