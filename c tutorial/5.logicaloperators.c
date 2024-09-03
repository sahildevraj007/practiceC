#include<stdio.h>
int main(){

    int isSunday=1;
    int isSnowing=1;

    int num1;
    int num2;

    scanf("%d", &isSunday);
    scanf("%d", &isSnowing);
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("&& operator\n");
    printf("%d\n", isSunday && isSnowing);

    printf("OR operator\n");
    printf("%d", isSunday || isSnowing);

    printf("\n%d", num1>=9 && num2<=100);

    return 0;

}