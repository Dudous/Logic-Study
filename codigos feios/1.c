#include<stdio.h>
int main(){
    char operador;
    float num1, num2;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c",&operador);

    printf("Digite dois números: ");
    scanf("%f %f",&num1,&num2);

    switch(operador){
        case '+':
        printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
        break;

        case '-':
        printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
        break;

        case '*':
        printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
        break;

        case '/':
        if(num2!=0){
           printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
           break;
        }
        else{
            printf("\nErro! Divisão por zero!");
            break;
		}

        default:
            printf("\nErro! Operador inválido!");
            break;
            
    }
    return 0;
}