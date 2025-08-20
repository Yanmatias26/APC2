#include <stdio.h>
#define PI 3.14159

double volumeEsfera(double raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

int main(){
    printf("%f\n", volumeEsfera(3));
    printf("%f\n", volumeEsfera(4));
    return 0;
}