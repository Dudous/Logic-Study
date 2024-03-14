#include <stdio.h>

int main()
{
    typedef struct Produto
    {
        /* data */
    };
    
    int cat, op;

    while (1)
    {
        printf("----------- Mercado ------------\n\n");   
        printf("---------- 1 - Carnes ----------\n");   
        printf("---------- 2 - Bebidas ---------\n");   
        printf("---------- 3 - Frios -----------\n");   
        printf("---------- 4 - Hortifruti ------\n");   

        scanf("%d", &cat);

        switch (cat)
        {
        case 1:  //Carnes

            while (1)
            {
                printf("----------- Carnes ------------\n\n");   
                printf("-------- 1 - Alcatra ----------\n");   
                printf("-------- 2 - Mignon -----------\n");   
                printf("-------- 3 - Coxão Mole -------\n");   
                printf("-------- 4 - Carne Moída ------\n");   
                printf("-------- 5 - sair ------\n");   
                
                scanf("%d", op);
            }
            break;
        
        default:
            break;
        }
    }
}
