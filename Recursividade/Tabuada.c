#include <stdio.h>

void Tabuada(int num, int cont)
{
    if(cont == 0){
        return;
    }
    
    Tabuada(num, cont-1);

    printf("%d x %d = %d\n", num,cont,num*cont);
}

int main()
{
    int num;
    printf("Insira um numero inteiro:");
    scanf("%d", &num);

    Tabuada(num, 10);
}
