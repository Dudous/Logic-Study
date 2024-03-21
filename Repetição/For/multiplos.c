#include <stdio.h>

int main()
{
    int num = 0, result = 0;

    do{
        printf("Digite um valor menor que 100: ");
        scanf("%d", &num);
    }while (num > 100);
    

    for(int i = 1; result + num <= 100; i++){
        result = i * num;
        printf("%d\n", result);
    }
}