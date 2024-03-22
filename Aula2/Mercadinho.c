#include <stdio.h>
int main(){
    
    int abrido = 1;
    float valor = 0;
    while(abrido){
        int op;
        int esc = 0;
        printf("_-=  MERCADINHO  =-_\n  1 - Hortifruti\n  2 - Carnes\n  3 - Grãos\n  4 - Bebidas\n  0 - Sair\n\n>>>");
        do
        {
            scanf("%d",&op);
        } while (op<0 || op>4);

    
        switch (op){
        case 1:
            printf("HORTIFRUTI\n0 - SAIR\n1 - Cenoura\t| R$1,00\n2 - Repolho\t| R$2,00\n>>>");
            do{
            scanf("%d",&esc);
            } while (esc>2 || esc<0);
            switch (esc){
                case 1:
                    valor+=2;
                    printf("VALOR DA COMPRA:\tR$%.2f\n",valor);
                    break;
            
                case 2:
                    valor+=4;
                    printf("VALOR DA COMPRA:\tR$%.2f\n",valor);
                    break;
                }
            break;

        case 2:
            printf("CARNES\n0 - SAIR\n1 - Frango\t| R$8,00\n2 - Linguica\t| R$5,00\n>>>");
            do{
            scanf("%d",&esc);
            } while (esc>2 || esc<0);
            switch (esc){
                case 1:
                    valor+=8;
                    printf("VALOR DA COMPRA:\tR$%.2f\n",valor);
                    break;
            
                case 2:
                    valor+=5;
                    printf("VALOR DA COMPRA:\tR$%.2f\n",valor);
                    break;
                }
            break;

        case 3:
            printf("GRÃOS\n0 - SAIR\n1 - Arroz\t| R$7,00\n2 - Feijão\t| R$5,00\n>>>");
            do{
            scanf("%d",&esc);
            } while (esc>2 || esc<0);
            switch (esc){
                case 1:
                    valor+=5;
                    printf("VALOR DA COMPRA:\tR$%.2f\n",valor);
                    break;
            
                case 2:
                    valor+=8;
                    printf("VALOR DA COMPRA:\tR$%.2f\n",valor);
                    break;
                }
            break;

        case 4:
            printf("BEBIDAS\n0 - SAIR\n1 - Coca-cola\t| R$4,00\n2 - Guaraná\t| R$3,00\n>>>");
            do{
            scanf("%d",&esc);
            } while (esc>2 || esc<0);
            switch (esc){
                case 1:
                    valor+=4;
                    printf("VALOR DA COMPRA:\tR$%.2f\n",valor);
                    break;
            
                case 2:
                    valor+=3;
                    printf("VALOR DA COMPRA:\tR$%.2f\n",valor);
                    break;
                }
            break;
            
        case 0:
            abrido = 0;
            break;
        }
    }
    
    printf("\n\nVALOR TOTAL DA COMPRA: [ R$%f ]",valor);

    return 0;
}