#include <stdio.h>

int main() {

    int n;

    for(int i=1, j=2; i<=j; i++, j++) {

        printf("Enter a number ");
        scanf("%d",&n);

        if(n%7==0) {
            break;
        }

    }

}
