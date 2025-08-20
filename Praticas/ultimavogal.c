#include <stdio.h>

int main(){
    char palavra [100];
    printf("Digite uma palavra\n");
    scanf("%s", palavra);

    char *p = palavra;
    char ultima = '\0';
    while(*p != '\0'){
        p++;
        if(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' 
            || *p == 'I' || *p == 'O' || *p == 'U'){
            ultima = *p;
        }
    }
    if(ultima != '\0'){
        printf("A ultima vogal da palavra %s eh %c\n", palavra, ultima);
    } else {
        printf("Nao foi encontrada nenhuma vogal na palavra %s\n", palavra);
    }
    return 0;
}