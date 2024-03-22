#include <stdio.h>
#include <math.h>

int main()
{
    int user, result, primo, index = 0;
    int primos[30];


    printf("Digite ate qual valor deseja visualizar os numeros primos: ");
    scanf("%d", &user);
    
    for(int i = 2; i <= user; i++){
        primo = 1;
        for(int j = 2; j <= sqrt(i); j++){
            result = i % j;
            if(result == 0){
                primo = 0; 
                break;

            }
        }
        if(primo == 1)
        {
            primos[index] = i;
            index ++;
        }
    }

    printf("Os numeros primos ate %d: ", user);

    for(int k = 0;k <= index - 1; k++){
        printf("\n%d",primos[k]);
    }
}