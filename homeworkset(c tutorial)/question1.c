//write a program to calculate perimeter of a triangle
#include<stdio.h>

int main(){

    float a,b,c;

    printf("Enter side a : ");
    scanf("%f",&a);

    printf("Enter side b : ");
    scanf("%f",&b);

    printf("Enter side c : ");
    scanf("%f",&c);
    printf("Perimeter of triangle is : %f", a+b+c );

    return 0;

}