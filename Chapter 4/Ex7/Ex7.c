#include <stdio.h>
#define KILOMETER 1.609
#define LITER 3.785

int main(void) {
    float miles;
    float gallons;
    float consumption;
    float kilometers;
    float liters;
    printf("Type miles traveled and gallons used: ");
    scanf("%f %f", &miles, &gallons);
    consumption = miles / gallons;
    printf("Your consumption is %.1f miles for 1 gallon.\n",
    consumption);
    liters = gallons * LITER;
    kilometers = miles * KILOMETER;
    consumption = liters / (kilometers / 100);
    printf("Your consumption is %.1f liters for 100 kilometers.\n",
    consumption);
    printf("\n\n");
}