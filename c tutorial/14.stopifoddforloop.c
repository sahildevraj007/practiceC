#include <stdio.h>

int main() {

    int n;

    for(int i = 2, j = 3; i<=j; i+=2, j+=2) {

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
