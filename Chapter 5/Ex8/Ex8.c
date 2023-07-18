#include <stdio.h>

void Temperatures(int temp);

int main(void) {
    double temp = 0;
    printf("Enter value of temperature by celsius (q to exit): ");
    while(scanf("%lf", &temp)) {
        Temperatures(temp);
        printf("\nEnter value of temperature by celsius: ");
    }
    printf("Work is over.");
    printf("\n\n");
}

void Temperatures(int temp) {
    const double KELVIN = temp + 273.15;
    const double FAHRENGEIT = (temp * 9/5) + 32;
    printf("Kelvin: %.2lf\nFarhergeit: %.2lf",
    KELVIN, FAHRENGEIT);
}