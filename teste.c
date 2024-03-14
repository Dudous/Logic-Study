#include <stdio.h>

// Definição da estrutura para representar cada opção do menu
typedef struct {
    int id;
    char description[100];
    void (*function)();
} MenuItem;

// Protótipos das funções associadas a cada opção do menu
void option1();
void option2();
void option3();
void option4();

int main() {
    // Array de itens do menu
    MenuItem menu[] = {
        {1, "Opção 1", option1},
        {2, "Opção 2", option2},
        {3, "Opção 3", option3},
        {4, "Opção 4", option4},
    };

    int choice;
    int numItems = sizeof(menu) / sizeof(menu[0]);

    do {
        // Exibindo o menu
        printf("\n===== Menu =====\n");
        for (int i = 0; i < numItems; i++) {
            printf("%d. %s\n", menu[i].id, menu[i].description);
        }
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        // Verifica se a opção escolhida é válida
        if (choice >= 0 && choice <= numItems) {
            // Se a opção for 0, sai do menu
            if (choice == 0) {
                printf("Saindo...\n");
                break;
            } else {
                // Chama a função associada à opção escolhida
                menu[choice - 1].function();
            }
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (choice != 0);

    return 0;
}

// Implementação das funções associadas a cada opção do menu
void option1() {
    printf("----------- Carnes ------------\n\n");   
    printf("-------- 1 - Alcatra ----------\n");   
    printf("-------- 2 - Mignon -----------\n");   
    printf("-------- 3 - Coxão Mole -------\n");   
    printf("-------- 4 - Carne Moída ------\n");   
    printf("-------- 5 - sair ------\n");   
                
}

void option2() {
    printf("Você escolheu a opção 2.\n");
}

void option3() {
    printf("Você escolheu a opção 3.\n");
}

void option4() {
    printf("Você escolheu a opção 4.\n");
}
