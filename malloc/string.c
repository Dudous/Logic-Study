#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *string = malloc(50 * sizeof(char));

    printf("Digite seu texto\n");
    scanf("%49[^\n]s", string);

    printf("%s", string);
}