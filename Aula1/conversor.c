#include <stdio.h>

int main(){
    float celcius = 40;
    float fah = 0;
    float kelvin = 0;

    fah = (celcius * 9/5) + 32;
    kelvin = celcius + 273.15;

    printf("Temperatura em Celsius: %.1f \n", celcius);
    printf("Temperatura em Fahrenheit: %.1f\n", fah);
    printf("Temperatura em Kelvin: %.2f", kelvin);
}