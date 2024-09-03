#include <stdio.h>

int main() {

    int n, i=2, j=3;

    while(i<=j) {

        printf("Enter a number: ");
        scanf("%d",&n);

        if(n%2==0) {
            printf("%d\n",n);
        }
        else {
            break;
        }

    }

}
