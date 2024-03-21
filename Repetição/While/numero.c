#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int num = (rand()% 1000), user = 0;

    do{
        printf("Digite um numero:\n");
        scanf("%d", &user);
        if(user > num)
            printf("Numero misterioso mais Abaixo\n");
        else if (user < num)
            printf("Numero misterioso mais Acima\n");
        
    }while(user != num);

    printf("O Número é: %d\n\n", num);
}