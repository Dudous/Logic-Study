#include <stdio.h>
#include <stdlib.h>

void MergeSort(int * array, int start, int end)
{
    char a;

    if(start >= end)
        return;

    int mid = start + (end - start) / 2;

    MergeSort(array, start, mid);

    MergeSort(array, mid + 1 , end);

    scanf(" %c", &a);

    int * copy = malloc((end - start)* sizeof(int));

    int second = mid + 1;

    int pace = 0;

    printf("\n\nMERGE \nstart %d , end %d, second %d , pace %d", start, end, second, pace);

    while (pace <= end - start)
    {
        if(array[start] < array[second])
        {
            copy[start] = array[start];
            copy[second] = array[second];
            start++;
        }
        else
        {
            copy[start] = array[second];
            copy[second] = array[start];
            second++;
        }

        for (int i = start; i <= end; i++)
        {
            array[i] = copy[i];
            printf("\t%d", array[i]);
        }
        
        pace++;
    }
    
    printf("\n\n");
    for (int i = 0; i < 7; i++)
    {
        printf("\t%d", array[i]);
    }

}


int main()
{
    int array[7] = {3,1,2,5,9,7,6};

    MergeSort(array, 0, 6);

    printf("\n");

    for (int i = 0; i < 7; i++)
    {
        printf("\n%d", array[i]);
    }
    
}