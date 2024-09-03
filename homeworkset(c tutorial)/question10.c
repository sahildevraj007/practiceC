//  print the number from 0 to n, if n is given by the user using do while loop

#include <stdio.h>

int main() {

    int i=0,n;

    printf("Enter a number: ");
    scanf("%d",&n);

    do {
        printf("%d\n",i);
        i++;
    }
    while(i<=n);

}