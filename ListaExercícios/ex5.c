#include <stdio.h>

int main()
{
    double vetor[] = {3.14, 2.71, 1.618, 0.577};

    for(int i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++)
    {
        printf("%.3lf\n", vetor[i]);
    }
}