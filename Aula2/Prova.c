#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE * arquivo;
    srand(time(NULL));
    int i = 1, num, resp, correct = 0;
    arquivo = fopen("./respostas.txt", "w");

    while (i<= 5)
    {
        int a = rand()%100;
        int b = rand()%100;
        
        resp = a + b;
        printf("Qual a Soma de %d + %d\n", a, b);
        scanf("%d", &num);

        if (resp == num){
             printf("Parabéns, Você Acertou!!\n"); 
             correct ++; 
            } 
        else{
            printf("Que pena, Você errou!\n");
        }
        i++;

        fprintf(arquivo,"%d + %d = %d, Sua resposta: %d\n", a, b, resp, num);
    }

    printf("\nVocê acertou %d Questões!", correct);
    fprintf(arquivo, "Você acertou %d Questões!", correct);
    fclose(arquivo);
}