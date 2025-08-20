#include <stdio.h>

int fatorial(int num){
      int resultado = 1;
    if(num == 0){
        return resultado;
    } else {
    for(int i = 1; i <= num; i++){
            resultado *= i;
        }
        return resultado;
    }
}
int main(){
    printf("%d\n", fatorial(5));
    printf("%d\n", fatorial(2));
    return 0;
}