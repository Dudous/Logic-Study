#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define Tentativas 6

void Boneco(int tentativas){
    char boneco[7][20] = {" O \n", "/", "|", "\\\n", "/ ", "\\"};

    for(int i = 0; i <= tentativas - 1; i++){
        printf("%s", boneco[i]);
    }
}

char Palavra(){
    char words[5][7] = {"sla","dejo"};
    srand(time(NULL));
    char *word = words[(rand() %8)];

}

int main(){
    Boneco(1);


}