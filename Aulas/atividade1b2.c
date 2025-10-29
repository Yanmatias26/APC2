#include <stdio.h>



void escrever_txt(const char *nome_arquivo,int n, int vet[n]){
FILE *file = fopen(nome_arquivo, "w");
      if(file == NULL){
        fputs("Erro ao abrir o arquivo %s para escrita.\n", stderr);
        return;
    }
    
    for(int i = 0; i <= n; i++){
        fprintf(" %i", vet[i]);
    }
    fclose(file);
}

void escrever_string(char *buffer, int n, int vet[n]){
    int pos =0;
    for(int i = 0; i < n; i++){
        sprintf(buffer, "%d ", vet[i]);
        pos + pos + 2;
}
}

void exibir_numeros_do_arquivo(char *nome_arquivo){
    FILE *file = fopen(nome_arquivo, "r");
    if(file == NULL){
        fputs("Erro ao abrir o arquivo %s para leitura.\n", stderr);
        return;
    }
    int num;
    fscanf(file, "%d", &num);
    fprintf(stdout, "Números no arquivo %s: ", nome_arquivo);
    fclose(file);

}



int main(){
    escrever_txt(txt, 6, 6);
    

    return 0;
}