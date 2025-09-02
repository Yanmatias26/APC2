#include <stdio.h>
void doisvalores(int *a, int *b, float *d){
    if(*b == 0){
        return;
    }
*d = (float)*a / *b;
printf("%.2f\n",*d);
}

int main(){
    int x = 5, y = 10;
    float resultado;
    doisvalores(&x, &y, &resultado);

    return 0;
}