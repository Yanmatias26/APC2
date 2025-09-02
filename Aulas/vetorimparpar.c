#include <stdio.h>
void preencher_vetor(int n, int vetor[n], int res[2]){
    res[0] = 0;
    res[1] = 0;
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            res[0]++;
        } else {
            res[1]++;
        }
    }
};

void vetor_impar_par(int n, int vetor[2]){
     for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            vetor[1]++;
        } else {
            vetor[0]++;
        }
    }
}

void imprimir_vetor(int n, int vetor[]){
    for(int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }
}   
void imprimir_vetor_par(int n, int vetor[]){
    for(int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }
}   

int main(){
    int n = 10;
    int vetor[n];
    int contadores[2] = {0, 0};
    printf("Armazenar no vetor:\n");
    preencher_vetor(n, vetor);
    printf("Imprimir o vetor:\n");
    imprimir_vetor(n, vetor);
    imprimir_vetor(n, vetor_impar_par);
    

    return 0;
}
