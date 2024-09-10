//write a funciton that prints namaste if user is indian and bonjour if user is french

#include <stdio.h>

void namaste();
void bonjour();

int main() {

    char ch;

    printf("Enter f for French and i for Indian: ");
    scanf("%c",&ch);

    if(ch=='i') {
        namaste();
    }
    else if(ch=='f') {
        bonjour();
    }
    else {
        printf("Wrong input");
    }

    namaste();

return 0;
}

void namaste() {

    printf("Namaste\n");
    bonjour();

}

void bonjour() {

    printf("Bonjour\n");

}