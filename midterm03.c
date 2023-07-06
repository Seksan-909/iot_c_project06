#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("+++++++++++++++++++++++++++++++++\n ");
    printf("      Clecius to Farenheit\n");
    printf("+++++++++++++++++++++++++++++++++\n ");
    
    printf("Enter Celsius temperature: ");
    scanf("%f", &celsius);

    printf("+++++++++++++++++++++++++++++++++\n ");

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit is: %.2f\n", fahrenheit);

    printf("+++++++++++++++++++++++++++++++++\n ");

    return 0;
}