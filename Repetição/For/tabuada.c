#include <stdio.h>

int main()
{
    int user, result;

    printf("Digite o numero que deseja visualizar a tabuada: ");
    scanf("%d", &user);

    for(int i = 0; i < 11; i++){
        result = user * i;
        printf("%d x %d = %d\n", user, i, result);
    }
}