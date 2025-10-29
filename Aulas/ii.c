#include <stdio.h>

//Yan Alexandre Matos Matias 2512082033
//Théo Torres Rodrigues Batista 2512082021

//1 - interativo usa laços e recursivo usa chamadas de função.

//2
// item a
int f(int n){
    if(n > 1){
        return n * f(n - 1);
    } if(n == 1) {
        return n;
    } else {
        return 0; //exceção
}
}
// item b
int g(int n){
    if(n > 1){
        return g(n - 1) + n;
    } if(n == 1) {
        return n;
    } else {
        return 0; //exceção
}
}
// item c
int c(int n){
    if(n == 1);
    return 2;
    if(n <= 0);
    return 0; //exceção
    if(n > 1);
    return h(n -1) + 3;
}
// item d
int d(int n){
    if(n == 1);
    return 3;
    if(n <= 0);
    return 0; //exceção
    if(n > 1);
    return d(n -1) *2;
}
// item e
int e(int n){
    if(n == 1);
    return 0;
    if(n <= 0);
    return 0; //exceção
    if(n > 1);
    return e(n -1) + (n -1);
}
int main (){
    printf("%d\n", f(5));
    printf("%d\n", g(5));
    printf("%d\n", h(5));
    printf("%d\n", c(5));
    printf("%d\n", d(5));
    printf("%d\n", e(5));

    return 0;
}