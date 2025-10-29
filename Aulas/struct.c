#include <stdio.h>
 struct pessoa{
        char nome[100];
         unsigned idade;
 } pessoa[3];

int main(){
        for(int i = 0; i < 3; i++){
        printf("digite o nome da pessoa %d\n", i+1);
        scanf("%99s[^\n]", pessoa[i].nome);
        printf("idade da pessoa %d\n",i+1);
        scanf("%d", &pessoa[i].idade);
        
        //getchar();
    }

    for(int i = 0; i < 3; i++){
        printf("digite o nome da pessoa %d\n", i+1);
        scanf("%99s[^\n]", pessoa[i].nome);
        printf("idade da pessoa %d\n",i+1);
        scanf("%d", &pessoa[i].idade);
        
        //getchar();
    }
    for(int i =0; i < 3; i++){
        printf("nome: %s\n", pessoa[i].nome);
        printf("idade: %d\n", pessoa[i].idade);
        
    }

    return 0;
}