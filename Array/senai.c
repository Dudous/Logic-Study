#include <stdio.h>

int main()
{
    char name[3][10], curso[3][10], *txt;
    float score[3];

    FILE * archive;

    archive = fopen("IANES.txt", "w");

    for(int i = 0; i < 4; i++)
    {
        printf("\nDigite o Nome do Aluno: ");
        scanf("%s", name[i]);
        printf("\nDigite o Curso do Aluno: ");
        scanf("%s", curso[i]);
        printf("\nDigite a Media do Aluno: ");
        scanf("%f", score[i]);
    }
    
    for(int i = 0; i < 4; i++)
    {
        fprintf(archive, "Nome: %s, ", name[i]);
        fprintf(archive, "Curso: %s, ", curso[i]);
        fprintf(archive, "Média: %f\n", score[i]);
    }
    fclose(archive);

    archive = fopen("IANES.txt", "r");

    fscanf(archive, "%s", &txt);

    printf("%s", txt);
}