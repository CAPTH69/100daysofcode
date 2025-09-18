//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h> 
int main() {
    int a, b;
    int sum, difference, product;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    
    if (b != 0) {
        quotient = (float)a / b;
        printf("The quotient of %d and %d is %.2f\n", a, b, quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    printf("The sum of %d and %d is %d\n", a, b, sum);
    printf("The difference of %d and %d is %d\n", a, b, difference);
    printf("The product of %d and %d is %d\n", a, b, product);

    return 0;
}