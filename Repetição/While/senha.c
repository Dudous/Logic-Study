#include <stdio.h>
#include <string.h>

int main(){
    char senha[5]= "leme", user[5];

    while (1)
    {
        printf("Digite a Senha:\n");
        scanf("%s",user);
        if(strcmp(senha, user) == 0)
            break;
    }
    printf("\n\nAcesso Permitido");
}