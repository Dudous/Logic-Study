#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void Boneco(int tentativas){
    char boneco[7][20] = {"|   O ", "\n|   |", "\b\b/", "|\\ \n|", "\b|  / ", "\\"};

    printf("\n\n ____\n");
    printf("|   |\n");

    if(tentativas ==0)
        printf("|");
    else{
        for(int i = 0; i <= tentativas - 1; i++){
            printf("%s", boneco[i]);
        }
    }
    printf("\n|   \n|__________________________________\n");
}


char *Palavra() {
    char *words[5] = {"boneco", "barata", "molejo", "tucano"};
    srand(time(NULL));
    return strdup(words[rand() % 4]);
}

void Palpite(char palpite[7]){
    for(int i = 0;i <= 6;i++){
        printf("%c ", palpite[i]);
    }
}

int main() {
    char letter, palpite[7] = "______";
    int correct, erros = 0, acertos = 0;

    char *palavra = Palavra();

    while((erros < 6) & (acertos < 6))
    {
        Boneco(erros);

        printf("\n\n");

        Palpite(palpite);
		
		fflush(stdin);
		
        printf("\n\nDigite uma Letra:");
        scanf("%c", &letter);

        correct = 0;

        for(int j= 0;j<= 6;j++){
           if(letter == palavra[j])
           {
               palpite[j] = letter;
               correct = 1;
               acertos++;
           }
        }

        if (correct == 0){
            erros++;
        }
    }

    if(erros == 6)
        printf("Voce Perdeu :(");
    else
        printf("Voce Ganhou :)");
}