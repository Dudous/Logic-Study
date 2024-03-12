#include <stdio.h>

int main(){
    int num = 23;

    if(num % 2 == 0){
        printf("O número %.1i é Par!", num);
    }
    else{
        printf("O número %.1i não é Par!", num);
    };
}