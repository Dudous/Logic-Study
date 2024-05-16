#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include "Queue.h"


void teste()
{
    printf("Batata");
}

int addQueue(int hour)
{
    srand(time(NULL));

    int chance = (hour >= 8 && hour <= 17)? 30: 80;

    int num = rand()%101;

    if(num < chance){
        printf("\n\nMais uma Pessoa entrou na Fila!\n\n");
        return 1;
    }
    return 0;
}

int ffQueue()
{
    int chance = 10;

    srand(time(NULL));
    int num = rand()%101;

    if(num < chance)
    return 
}

void printFila(Queue * fila)
{
    for (int i = 0; i < fila->size; i++)
    {
        printf("%d - ", fila->array[i]);
    }
}


int main ()
{

    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "Current local time and date: %s", asctime (timeinfo) );

    Queue fila = queueConstructor();

    while (1)
    {
        if(addQueue(timeinfo->tm_hour)) 
        {
            enqueue(&fila, 1);
            printf("\n\nPessoas na fila: %d\n\n", size(&fila));
            printFila(&fila);
        }

        Sleep(1000);

        if()
    }
    
}