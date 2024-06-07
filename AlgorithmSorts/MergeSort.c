#include <stdio.h>
#include <stdlib.h>

void MergeSort(int * array, int start, int end)
{
    printf("\n\nMERGE 1\nstart %d , end %d", start,end);
    char a;
    scanf(" %c",&a);
    if(start >= end)
        return;

    MergeSort(array, start, end / 2 );

    if(array[start] > array[end])
    {
        array[start] = array[start] ^ array[end];
        array[end] = array[start] ^ array[end];
        array[start] = array[start] ^ array[end];
    }
    printf("\n\nMERGE 2\nstart %d , end %d", start,end);
    MergeSort(array, (end / 2) + (end & 1), end);

}


int main()
{
    int array[7] = {3,1,2,5,9,7,6};

    MergeSort(array, 0, 6);

    for (int i = 0; i < 7; i++)
    {
        printf("\n%d", array[i]);
    }
    
}