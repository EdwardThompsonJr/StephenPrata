#include <stdio.h>

int main(void) {
    float x;
    printf("Type float-type number: ");
    scanf("%f", &x);
    printf("\nYour number is %.3f and has another form %e", x, x);
    printf("\n\n");
}