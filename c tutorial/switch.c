#include <stdio.h>

int main() {

    int day;
    printf("Enter day(1-7): ");
    scanf("%d",&day);

    switch (day) {
        case 1 : printf("Monday");
        break;

        case 2 : printf("Tuesday");
        break;

        case 3 : printf("Wedsday");
        break;

        case 4 : printf("Thurssday");
        break;

        case 5 : printf("Friday");
        break;

        case 6 : printf("Saturday");
        break;

        case 7 : printf("Sunday");
        break;    

        default : printf("Invalid Number");        
    }
    


}