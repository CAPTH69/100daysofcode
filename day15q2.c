//Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int number, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }
    printf("The reversed number is %d\n", reversed);
    return 0;
}  