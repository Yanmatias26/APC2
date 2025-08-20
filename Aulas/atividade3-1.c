#include <stdio.h>
void data(int data){
    int dia = 20;
    enum mes_do_ano {JANEIRO = 1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, 
        AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO};
    int mes = 1;
    int ano = 2025;
    char nomes [12][20]={"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", 
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("Data: %02d de %s de %04d\n", dia, nomes[mes-1], ano);
}


int main(){
    data(1);

    return 0;
}