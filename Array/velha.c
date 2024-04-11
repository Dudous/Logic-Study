#include <stdio.h>

int main()
{
    int user, cont = 1;
    char jogador, jogo[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    
    while (1)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("\t %d", jogo[i][j]);
            }
            printf("\n\n");
        }
        printf("Digite a posição, Jogador %d\n", cont);
        scanf(" %d", &user);

        user --;

        jogador = (cont%2 == 0)? 'O': 'X';

        jogo[user/3][user%3] = jogador;

        cont++;
    }
    


    
}