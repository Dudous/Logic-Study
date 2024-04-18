#include <stdio.h>
#include "velha.h"

int main()
{
    int user, cont = 1;
    char jogador, jogo[3][3] = {{'.','.','.'},{'.','.','.'},{'.','.','.'}};
    
    while (Vencedor(jogo))
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("\t %c", jogo[i][j]);
            }
            printf("\n\n");
        }
        printf("Digite a posicao, Jogador %d\n", (cont%2 == 1)? 1: 2);
        scanf(" %d", &user);

        user --;

        jogador = (cont%2 == 0)? 'O': 'X';

        if(jogo[user/3][user%3] == '.')
        {
            jogo[user/3][user%3] = jogador;
            cont ++;
        }
        else{
            printf("Posição inválida, tente novamente!!\n\n");
        } 
    }
    


    
}