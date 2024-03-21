#include <stdio.h>

int main()
{
    int num1, num2, num3;

    do{
        printf("Digite o Valor 1:\n");
        scanf("%d", &num1);
        printf("Digite o Valor 2:\n");
        scanf("%d", &num2);
        printf("Digite o Valor 3:\n");
        scanf("%d", &num3);
    }while(num1 + num2 + num3 != 45);

    printf("\n\nExcelente!");
}