#include <stdio.h>
#include <stdlib.h>
#include "banco.h"

int main()
{
    int op;
    float valor;

    printf("Banco\n");

    Init("banco.txt");

    while (op != 4)
    {
        printf("Digite a Operacao que deseja efetuar:\n1 - Deposito\n2 - Pagamento\n3 - Extrato\n");

        scanf("%d", &op);

        switch (op)
        {
        case 1:
            system("cls");
            printf("Digite o Valor do Deposito:");
            scanf("%f", &valor);
            Deposit(valor);
            break;
        
        case 2:
            system("cls");
            printf("Digite o Valor do Pagamento:");
            scanf("%f", &valor);
            Pay(valor);
            break;
            
        case 3:
            system("cls");
            Extrato();
            break;
        default:
            break;
        }
    }
}