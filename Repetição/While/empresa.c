#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int saldo = (rand()% 100);

    while(saldo < 60){
        printf("Saldo: %d\n", saldo);
        printf("Saque nao Disponivel\n\n");
        saldo = (rand()%100);
    }
        printf("Saldo: %d\n", saldo);
        printf("Saque Disponivel");

}