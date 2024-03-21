#include <stdio.h>

int main()
{
    int lin, op, height, width;

    printf("1 - Triangulo\n2- Retangulo\n");
    scanf("%d", &op);

    switch (op)
    {
        case 1:
            printf("Digite o numero de linhas do Triangulo: ");
            scanf("%d", &lin);

            for(int i = 0; i <= lin; i++)
            {
                for(int k = 0; k <= lin - i; k++){
                    printf("  ");
                }
                for(int j = 0; j <= i; j++){
                    printf(" *  ");
                }
                printf("\n");
            }
        break;
    case 2:
            printf("Digite o numero de Linhas do Retangulo: ");
            scanf("%d", &height);
            printf("Digite o numero de Colunas do Retangulo: ");
            scanf("%d", &width);    

            for(int i = 1; i <= height; i++){
                for(int j = 1; j <= width; j++){
                    printf(" *");
                }
                printf("\n");
            }
    break;
    default:
        break;
    } 

}