#include <stdio.h>

int main() {

    int n, i=2, j=3;

    do {

        printf("Enter a number: ");
        scanf("%d",&n);

        if(n%2==0) {
            printf("%d\n",n);
        }
        else {
            break;
        }

    i+=2;
    j+=2;

    }
    while(i<=j);


}
