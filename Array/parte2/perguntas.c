#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char perguntas[3][100] = {{"Quanto e 2 + 2?"},{"Qual a cor do cavalo branco de napoleao?"}, {"Quem foi o 12 presidente do Brasil?"}},
    respostas[3][4][20] = {{{"1"}, {"2"}, {"3"},{"4"}},{{"Azul"},{"Vermelho"},{"Preto"},{"Branco"}},{{"Delfim Moreira"},{"Nilo Pecanha"},{"Artur Bernardes"},{"Getulio Vargas"}}};
    int gabarito[3] = {4, 4, 3}, user[3], pontos = 0;

    printf(" ---------------- QUIZ ----------------");

    for (int i = 0; i < 3; i++)
    {
        printf("\n\n%s\n\n", perguntas[i]);
        for (int j = 0; j < 4; j++)
        {
            printf("%d - %s    ",j+1, respostas[i][j]);
        }
        printf("\n\n>>>");
        scanf("%d", &user[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        pontos += (user[i] == gabarito[i])? 1 : 0;
    }
    
    printf("\n\nPontuacao Final: %d", pontos);

}