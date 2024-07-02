#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 7

void Sort(char array[][TAM], int Start, int End)
{
    if(Start >= End)
        return;

    char Pivot[TAM], aux[TAM]; //Pivot para o final

    strcpy(Pivot, array[End]);

    int cont = Start; // Contador para o Inicio
  
    for(int j = Start; j <= End; ++j)
    {
        if(array[j] > 47 && array[j] < 58)
            if(array[j]-'0' < Pivot)
            {
                strcpy(aux, array[cont]);
                strcpy(array[cont], array[j]);
                strcpy(array[j], aux);
                cont++;
            }
        else
            if(strcmp(array[j], Pivot) < 0)
            {
                strcpy(aux, array[cont]);
                strcpy(array[cont], array[j]);
                strcpy(array[j], aux);
                cont++;
                
            }
    }

    //Posiciona o Pivot
    strcpy(aux, array[cont]);
    strcpy(array[cont], array[End]);
    strcpy(array[End], aux);

    Sort(array, Start, cont - 1);
    Sort(array, cont + 1, End);
    
    printf("\n\n\n");
    for(int i = 0; i < 5; ++i)
    {
        printf("%d, ", array[i][0]);
    }
}

void QuickSort(char array[][TAM], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; array[i][j]; j++)
        {
            array[i][j] = tolower(array[i][j]);
        }
        
    }

    for(int i = 0; i < 5; ++i)
    {
        printf("%s, ", array[i][0]);
    }

        // printf("\n\n");
    // Sort(array, 0, size);
    
}

int main()
{
    char A[17][TAM] = 
    {
        "98", "11","12","horara","zzzzz"
    };

    int size = sizeof(A)/ sizeof(A[0]);

    Sort(A, 0, 16);

    printf("\n\n\n");
    for(int i = 0; i < 5; ++i)
    {
        printf("%s, ", A[i]);
    }

}