#include <stdio.h>
#ifndef AGENDA_H
#define AGENDA_H

typedef struct 
{
    int ddd;
    char telefone[11];
}Telefone;

typedef struct 
{
    char rua[50];
    int numero;
    char complemento[50];
    char bairro[30];
    char cep[11];
    char cidade[50];
    char estado[50];
    char pais[50];
}Endereco;

typedef struct 
{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct 
{
    char nome[50];
    char email[50];
    Endereco endereco;
    Telefone telefone;
    Data nascimento;
    char obs[100];
}Pessoa;

#endif