#include<stdio.h>
int main(){

    int num1,num2,num3;

    printf("Enter number 1: \n");
    scanf("%d",&num1);
    printf("Enter number 2: \n");
    scanf("%d",&num2);
    printf("Enter number 3: \n");
    scanf("%d",&num3);

    int average = (num1+num2+num3)/3;

    printf("The average is: \n%d", average);
}