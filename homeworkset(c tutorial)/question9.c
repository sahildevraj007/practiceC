//  print the number from 0 to n, if n is given by the user using while loop

#include <stdio.h>

int main() {

    int i=0,n;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n) {
        printf("%d\n",i);
        i++;
    }

}