#include <stdio.h>

int main() {

    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("LOWERCASE");
    }
    else {
        printf("UPPERCASE");
    }
}

