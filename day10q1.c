//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main(){
    int a, b, c;
    printf("enter first side of triangle:- ");
    scanf("%d", &a);
    printf("enter second side of triangle:- ");
    scanf("%d", &b);
    printf("enter third side of triangle:- ");
    scanf("%d", &c);
    if(a + b > c && b + c > b && a + c > b){
        printf("yes the triangle is valid\n");
        if (a == b && b == c){
            printf("it is a equilateral triangle\n");
        }
        else if(a == b || b == c || a == c){
            printf("it is a isoceles triangle\n");
        }
        else if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + b*b == c*c)){
            printf("it is a right angle triangle\n");
        }
        else{
            printf("it is a scalene triangle\n");
        }
    }
    else{
        printf("it is not a valid triangle\n");
    }
    return 0;
};