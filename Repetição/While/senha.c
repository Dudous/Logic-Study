#include <stdio.h>

int main(){
    char senha[5]= "leme", user[5];

    do{
        printf("Digite a Senha:\n");
        scanf("%s",user);
        // printf("%s", user);
    }while(user != senha);

    printf("\n\nAcesso Permitido");
}