#include <stdio.h>

 struct pessoa{
        char nome[100];
         unsigned idade;
        enum sexo{M, F} sexo; // M ou F
    };

        void prencher( struct pessoa pessoas[], int n ){
            for(int i = 0; i < n; i++){
        printf("digite o nome da pessoa %d\n", i+1);
        scanf("%99s[^\n]", pessoas[i].nome);
        printf("idade da pessoa %d\n",i+1);
        scanf("%d", &pessoas[i].idade);
        printf("sexo da pessoa %d (M/F)\n", i+1);
        scanf(" %c", &pessoas[i].sexo);
        //getchar();
    }
}

    void mostrardados(struct pessoa pessoas[], int n){
        for(int i =0; i < n; i++){
        printf("nome: %s\n", pessoas[i].nome);
        printf("idade: %d\n", pessoas[i].idade);
        printf("sexo: %c\n", pessoas[i].sexo);
    }
    }



int main(){
    int x =3;
    struct pessoa pessoas[x];
    prencher(pessoas, x);
    mostrardados(pessoas, x);

    return 0;
}