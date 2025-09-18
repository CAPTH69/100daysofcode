//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum = sum + (2 * i);
    }
    printf("The sum of the first %d odd numbers is %d\n", n, sum);
    return 0;
}