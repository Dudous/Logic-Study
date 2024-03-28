#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int criarPiram(int b){
    int base = (b*2)-1;
    int altura = b;
    int meio = b - 1;
    int **piramide = (int**) malloc(altura  * sizeof(int*));
    for(int i = 0; i < altura; i++){
        piramide[i] = (int*) malloc(base * sizeof(int));
    }

    for( int l = 0; l < altura; l++){
        printf("\n");
        for( int c = 0; c < base; c++){
            piramide[l][c] = 0;
        }
    }

    for(int l = 0; l < altura; l+=2){
        int outra = 0;
        for(int c = l; c < altura; c++){
            piramide[c][meio-outra] =  (rand()%100);
            piramide[c][meio+outra] = (rand()%100);
            outra++;
        }
    }

    
    for( int l = 0; l < altura; l++){
        printf("\n");
        for( int c = 0; c < base; c++){
            if(!piramide[l][c]){
                printf("\t ");
            }
            else{
            printf("\t%d",piramide[l][c]);
            }
        }
    }
    
}

int main() {
    srand(time(NULL));   
    criarPiram(5);

    return 0;
}