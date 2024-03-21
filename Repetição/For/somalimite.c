#include <stdio.h>

int main()
{
    int lim, soma = 0;

    printf("Digite o Valor limite: ");
    scanf("%d", &lim);

    for(int i = 0;i <= lim; i++){
        soma += i;
    }

    printf("A soma de todos os numeros ate o valor limite e %d", soma);
}