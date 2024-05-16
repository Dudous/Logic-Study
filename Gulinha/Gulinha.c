#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include "Queue.h"

int addQueue(int hour)
{
    srand(time(NULL));

    int chance = (hour >= 8 && hour <= 17)? 40: 80;

    int num = rand()%101;

    if(num < chance){
        printf("\n\nUma Pessoa entrou na Fila!\n");
        return 1;
    }
    return 0;
}

int ffQueue()
{
    int chance = 10;

    srand(time(NULL));
    int num = rand()%101;

    if(num < chance){
        printf("\n\nUma pessoa desistiu da fila!\n");
        return 1;
    }
    return 0;
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
    int pessoa = 1;

    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "Current local time and date: %s", asctime (timeinfo) );

    Queue fila = queueConstructor();

    while (1)
    {
        if(addQueue(timeinfo->tm_hour) == 1) 
        {
            enqueue(&fila, pessoa++);
            printFila(&fila);
        }

        Sleep(1000);

        if(ffQueue() == 1)
        {
            removeQUeue(&fila);
            printFila(&fila);
        }

        Sleep(1000);
    }
    
}