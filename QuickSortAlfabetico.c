#include <stdio.h>
void Sort(int * Lista, int Start, int End)
{
    if(Start >= End)
        return;

    int Pivot = Lista[End]; //Pivot para o final
    int i = Start; // Contador para o Inicio
  
    for(int j = Start; j <= End; ++j)
    {
        if(Lista[j]<Pivot)
        {
            int Temp = Lista[i];
            Lista[i] = Lista[j];
            Lista[j] = Temp;
            ++i;
        }
    }
    //Troca o item do 
    int Temp = Lista[i];
    Lista[i] = Lista[End];
    Lista[End] = Temp;

    for(int x = 0; x < 16; ++x)
    {
        printf("%i, ", Lista[x]);
    }
    printf("\n");

    Sort(Lista, Start, i - 1);
    Sort(Lista, i + 1, End);
}

int main()
{
    int A[16] = 
    {
        2, 3, 5, 6, 8, 9, 10, 12, 13, 7, 16, 1, 14, 4, 15, 11
    };
    Sort(A, 0, 15);
    for(int i = 0; i < 16; ++i)
    {
        printf("%i, ", A[i]);
    }
}