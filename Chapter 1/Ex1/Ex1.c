#include <stdio.h>

int main(void) {
    float dyum, sm;
    printf("Input dyums: ");
    scanf("%f", &dyum);
    sm = dyum * 2.54;
    printf("\nYour size in sm: %.3f\n\n", sm);
}