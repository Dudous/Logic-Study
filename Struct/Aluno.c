#include <stdio.h>

typedef struct
{
    char nome[100];
    int matricula;
    char curso[50];
} Aluno;


int main()
{
    Aluno alunos[6];
    Aluno aluno;

    for (int i = 0; i < 5; i++)
    {
        
        printf("Digite o nome do aluno: \n");
        scanf(" %99[^\n]", aluno.nome);
        printf("Digite o curso do aluno: \n");
        scanf(" %49[^\n]", aluno.curso);
        printf("Digite a matricula do aluno: \n");
        scanf(" %d", &aluno.matricula);

        alunos[i] = aluno;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d\n\n", i);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Matricula: %d\n\n\n", alunos[i].matricula);
    }
    
}