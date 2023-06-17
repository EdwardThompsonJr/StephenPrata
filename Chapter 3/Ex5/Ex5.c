#include <stdio.h>

int main(void) {
    long int secondsInYear = 3.156e+07;
    int years;
    long int yearsInSeconds;
    printf("Type your age in years: ");
    scanf("%d", &years);
    yearsInSeconds = years * secondsInYear;
    printf("\nYour age in years is %d, but in seconds it'll be %ld", years, yearsInSeconds);
    printf("\n\n");
}