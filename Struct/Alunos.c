#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[100];
    int matricula;
    char curso[50];
    int nota1;
    int nota2;
    int nota3;
} Aluno;


int main()
{
    Aluno alunos[6];

    for (int i = 0; i < 2; i++)
    {
        
        printf("Digite o nome do aluno: \n");
        scanf(" %99[^\n]", alunos[i].nome);
        printf("Digite o curso do aluno: \n");
        scanf(" %49[^\n]", alunos[i].curso);
        printf("Digite a matricula do aluno: \n");
        scanf(" %d", &alunos[i].matricula);
        printf("Digite a primeira nota do aluno: \n");
        scanf(" %d", &alunos[i].nota1);
        printf("Digite a segunda nota do aluno: \n");
        scanf(" %d", &alunos[i].nota2);
        printf("Digite a terceira nota do aluno: \n");
        scanf(" %d", &alunos[i].nota3);
    }
    
    char menor[100], maior[100];
    int min = 10, max = 0;

    for (int i = 0; i < 2; i++)
    {
        int media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;

        printf("\nAluno %d\n\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Media: %d\n", media);
        (media >= 6)? printf("Aprovado\n"): printf("Reprovado\n");

        if(media < min)
        { 
            min = media;
            strcpy(menor, alunos[i].nome);
        }

        if(media > max)
        { 
            max = media;
            strcpy(maior, alunos[i].nome);
        }
    }
    printf("\nMaior media: %s  -  Nota: %d\n", maior, max);
    printf("\Menor media: %s  -  Nota: %d", menor, min);
    
}