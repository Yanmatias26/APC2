#include <stdio.h>

int main(){
    int a=2, b=3, v[4] = {1,2,3,4,};
    int *p = v;
    int j =(v+5)- v;
    
    for(int i = 0; i<4; i++){
        printf("%d\n",p++);
    }
    printf("q1 -%d\n", p);
    printf("q3 -%d\n", v + 3);
    printf("q4 -%d\n", p-2);
    printf("q5 -%d, %d\n", (*p)++, p++);
    printf("q9 -%d\n",j);
    

    return 0;
}