// print the number from 0 to n, if n is given by the user using for loop

#include <stdio.h>

int main() {

    int i, n;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++){
        printf("%d\n",i);
    }

}
