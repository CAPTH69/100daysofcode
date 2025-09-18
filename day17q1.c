//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int number, original, remainder, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number;
    for (original = number; original != 0; n++) {
        original /= 10;
    }

    original = number;

    for (original = number; original != 0; original /= 10) {
        remainder = original % 10;
        result += pow(remainder, n);
    }

    if ((int)result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}