#include <stdio.h>

int main()
{
    int num;

    printf("Digite o numero para converter para binario:");
    scanf("%d", &num);

    Conversor(num);
}

void Conversor(int num)
{
    if(num > 0)
    {
    Conversor(num/2);
    printf("%d", num%2);
    }
}