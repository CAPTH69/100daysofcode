//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    int enteredseconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &enteredseconds);
    hours = enteredseconds / 3600;
    minutes = (enteredseconds % 3600) / 60;
    seconds = enteredseconds % 60;
    printf("The time in hours:minutes:seconds format is %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}