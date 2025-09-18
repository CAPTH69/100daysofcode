//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main() {
    float num1, num2, num3, largest;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }
    printf("The largest number among %.2f, %.2f, and %.2f is %.2f\n", num1, num2, num3, largest);
    return 0;
}
