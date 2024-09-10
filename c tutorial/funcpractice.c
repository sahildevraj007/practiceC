#include <stdio.h>

void calcPrice(float value);

int main() {

int value;
printf("Enter a number: ");
scanf("%d", &value);

calcPrice(value);

}

void calcPrince(float value) {

    value = value + (0.18*value);
    printf("Final price is: %f",value);

}