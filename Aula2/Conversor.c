#include <stdio.h>
#include <locale.h>

int main(){
    int op;
    float cel, fah;

    printf("Deseja converter:\n1 - Celcius\n2 - Fahrenheit\n");
    scanf("%d",&op);

    switch (op)
    {
        case 1:
            printf("Digite o Valor em Celcius: \n");
            scanf("%f",&cel);
            fah = (cel * 9/5) + 32;
            printf("Valor em Fahrenheit: %.2f", fah);
            break;
        case 2:
            printf("Digite o Valor em Fahrenheit: \n");
            scanf("%f", &fah);
            cel = (cel -32) * 5/9;
            printf("Valor em Celcius: %.1f", cel);
        default:
            break;
    }

    
    printf("%s",(cel > 30) ? "\nTemperatura Elevada" : "\nTemperatura Ok");

    return 0;

}