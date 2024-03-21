#include <stdio.h>

int main()
{
    int i = 1;
    long long num;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%lld", &num);

    for(i; num /= 10; i++){
    }
    printf("\n%d", i);
}