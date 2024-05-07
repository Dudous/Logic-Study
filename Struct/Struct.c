#include <stdio.h>
#include <string>

typedef struct
{
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct 
{
    Data date;
    Horario hour;
    char[100] desc; 
} Compromisso;


int main()
{

}