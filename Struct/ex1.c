#include <stdio.h>
#include <string.h>

typedef struct
{
    int matricula;
    char nome[100];
    int disciplina;
    int nota1;
    int nota2;
    float media;
} Aluno;


int main()
{
    Aluno alunos[6];

    for (int i = 0; i < 2; i++)
    {
        
        printf("Digite a matricula do aluno: \n");
        scanf(" %d", &alunos[i].matricula);
        printf("Digite o nome do aluno: \n");
        scanf(" %99[^\n]", alunos[i].nome);
        printf("Digite o codigo da disciplina: \n");
        scanf(" %d", &alunos[i].disciplina);
        printf("Digite a primeira nota do aluno: \n");
        scanf(" %d", &alunos[i].nota1);
        printf("Digite a segunda nota do aluno: \n");
        scanf(" %d", &alunos[i].nota2);

        alunos[i].media = ((alunos[i].nota1 * 1) + (alunos[i].nota2 * 2))/3;
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\nAluno %d\n\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Codigo disciplina: %d\n", alunos[i].disciplina);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Media ponderada: %.2f\n", alunos[i].media);
    }

    
}