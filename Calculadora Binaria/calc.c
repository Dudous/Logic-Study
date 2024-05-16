#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numA, numB;
    int op, result, casas;

    while (1)
    {
        printf("\n\n---------- CALCULADORA ----------\n");
        printf("Digite o Primeiro Valor:\n");
        scanf("%d", &numA);

        printf("Digite o Segundo Valor:\n");
        scanf("%d", &numB);


        printf("Selecione a Operação:\n1 - or\n2 - not (Primeiro valor)\n3 - xor\n4 - and\n5 - left shift\n6 - right shift:\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            result = numA | numB;
            printf("Resultado: %d", result);
            break;
        case 2:
            result = ~numA;
            printf("Resultado: %d", result);
            break;
        case 3:
            result = numA ^ numB;
            printf("Resultado: %d", result);
            break;
        case 4:
            result = numA & numB;
            printf("Resultado: %d", result);
            break;
        case 5:
            printf("Digite quantas casas devem movidas:");
            scanf("%d", &casas);
            result = numA << casas;
            printf("Resultado: %d", result);
            break;
        case 6:
            printf("Digite quantas casas devem movidas:");
            scanf("%d", &casas);
            result = numA >> casas;
            printf("Resultado: %d", result);
            break;

        default:
            break;
        }
    }
}