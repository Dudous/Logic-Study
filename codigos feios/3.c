#include <stdio.h>

int main() 
{
    //Input do usuário
    int num;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    printf("A soma dos números de 1 até %d é: %d\n", num, soma(num));

    return 0;
}


//Função soma dos valores até o valor digitado pelo usuário
int soma(int n) 
{
    if (n == 0)
        return 0;
    else
        return n + soma(n - 1);
}