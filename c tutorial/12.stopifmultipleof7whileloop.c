#include <stdio.h>

int main() {

    int n, i=1, j=2;

    while(i<=j) {

        printf("Enter a number: ");
        scanf("%d", &n);

        if(n%7==0) {
            break;
        }
        i++;
        j++;

    }

}
