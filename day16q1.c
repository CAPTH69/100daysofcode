//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int number, binary = 0, place = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    while (number > 0) {
        int remainder = number % 2;
        binary += remainder * place;
        number /= 2;
        place *= 10;
    }
    printf("The binary representation is %d\n", binary);
    return 0;
}