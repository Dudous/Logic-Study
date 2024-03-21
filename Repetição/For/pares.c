#include <stdio.h>

int main()
{
    int lim;
    printf("Digite o Valor limite: ");
    scanf("%d", &lim);

    for(int i= 0; i <= lim; i +=2 ){
        printf("%d\n", i);
    }
}