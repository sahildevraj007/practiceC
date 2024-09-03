#include<stdio.h>
int main(){

    int age;
    printf("Enter age:- \n");
    scanf("%d", &age);

    if(age>=18){
        printf("You're an adult\n");
        printf("You can vote\n");
        printf("You can drive\n");
    }
    else{
        printf("You're not an adult\n");
        printf("You can't vote\n");
        printf("You can't drive\n");
    }
    printf("Thanks");

}