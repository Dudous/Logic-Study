#include <stdio.h>
#ifndef BANCO_H
#define BANCO_H

FILE *arquivo, *leitor;
char *adress;
float saldo = 0;

void Init(char caminho[])
{
    adress = caminho;
    arquivo = fopen(caminho, "w");
    fprintf(arquivo, "-------- Extrato Bancário --------");
    fclose(arquivo);
}

void Deposit(float value)
{
    saldo += value;
    arquivo = fopen(adress, "a");
    fprintf(arquivo,"\n\nDeposito efetuado no Valor de %.2f\nSaldo: %.2f", value, saldo);
    fclose(arquivo);
}

void Pay(float value)
{
    if(value < saldo)
    {
        saldo -= value;
        arquivo = fopen(adress, "a");
        fprintf(arquivo,"\n\nPagamento Efetuado no Valor de %.2f\nSaldo: %.2f", value, saldo);
        fclose(arquivo);
    }
    else
        printf("\nSaldo Insuficiente!");
}

void Extrato()
{
    char xtrat[100];
    
    arquivo = fopen(adress, "r");
    while (fgets(xtrat,sizeof(xtrat), arquivo) != NULL)
    {
        printf("%s", xtrat);
    }
    fclose(arquivo);
}

#endif