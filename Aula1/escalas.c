# include <stdio.h>

int main(){
    float numero = 2000, lim_inf_A = 0, lim_inf_B = -5, lim_sup_A = 4095, lim_sup_B = 5, difA, difB, result, porcentagem, avanco;

    difA = lim_sup_A - lim_inf_A;
    difB = lim_sup_B - lim_inf_B;
    porcentagem = numero / difA;
    avanco = porcentagem * difB;
    result = lim_inf_B + avanco;

    printf("%f", result);

    return 0;
}