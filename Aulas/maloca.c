#include <stdio.h>
#include <stdlib.h>

//1- criar um função para n inteiros

int *criar_vetor(int n){
   if(n <= 0) return NULL;
    return malloc(sizeof(int) * n);
}

//2-ler vetor de inteiros apenas positivos
void ler_vetor(int *vet, int n){
    int temp;
    for(int i = 0; i < n; i++){
        do{
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &temp);}while(temp <= 0);
        {
            printf("Valor inválido. Digite um valor positivo: ");
            scanf("%d", &temp);
        }
        vet[i] = temp;
    }
}
//3- exibir o vetor
void exibir_vetor(int *vet, int n){
    printf("Vetor: ");
    for(int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(){
    int *dynamic_num = NULL; //ponteiro para void
    int *dynamic_vet = NULL; //ponteiro para void
    int local_num = 5;

    dynamic_num = (int *) malloc(sizeof(int));
    *dynamic_num = 5; // vetor de 1 inteiro
    printf("dynamic_num %p,dynamic_num: %d\n",dynamic_num, *dynamic_num);
    printf("dynamic_num %p,dynamic_num: %d\n",dynamic_num, dynamic_num[0]);

    // declarar um vetor de 5 inteiros
    dynamic_vet = criar_vetor(-6);
    printf("dynamic_vet %p\n", dynamic_vet);

    //declarar vetor de 5 inteiros
    dynamic_vet = criar_vetor(5);
    ler_vetor(dynamic_vet, 5);
    exibir_vetor(dynamic_vet, 5);
    free(dynamic_vet);

    dynamic_vet = criar_vetor_v1(10);
    exibir_vetor(dynamic_vet, 10);
    free(dynamic_vet);
    criar_vetor_v2(&dynamic_vet, 15);
    exibir_vetor(dynamic_vet, 15);

    return 0;
}