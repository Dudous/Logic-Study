#include <stdio.h>

int main(){
    int peso1 = 2;
    int peso2 = 3;
    int peso3 = 5;

    int tri1 = 95;
    int tri2 = 80;
    int tri3 = 90;
    int soma = 0;
    

    tri1 *= peso1;
    tri2 *= peso2;
    tri3 *= peso3;

    soma = tri1 + tri2 + tri3;

    int media = soma/10;

    printf("Média Final: %d", media);
}