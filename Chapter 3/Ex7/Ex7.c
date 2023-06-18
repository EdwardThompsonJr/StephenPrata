#include <stdio.h>

int main(void) {
    int cm;
    printf("Type your heigth in cm: ");
    scanf("%d", &cm);
    printf("\nYour heigth in inches is %.3f", cm/2.54);
    printf("\n\n");
}