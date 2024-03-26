#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define Tentativas 7

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
    int correct, erros = 0;

    char *palavra = Palavra();
    // for(int j= 0;j<= 7;j++){
    //         printf("%c\n", palavra[j]);
    // }

    printf("%s\n\n", palavra);
    

    for (int i = 0; i < Tentativas; i++)
    {
        Boneco(erros);

        printf("\n\n");

        Palpite(palpite);

        printf("\n\nDigite uma Letra:");
        scanf("%s", &letter);
        
        correct = 0;

        for(int j= 0;j<= 6;j++){
            printf("%c\n", palavra[j]);
            if(letter == palavra[j])
            {
                palpite[j] = letter;
                correct = 1;
            }
        }

        if (correct == 0){
            erros++;
        }
    }
    
}