//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature in Fahrenheit is %.2f\n", fahrenheit);
    return 0;
}