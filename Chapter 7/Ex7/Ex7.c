#include <stdio.h>
#include <ctype.h>
#define FIRST_TAX 0.15
#define SECOND_TAX 0.2
#define THIRD_TAX 0.05

int main(void) {
    int hours = 0;
    float salary = 0;
    float tax = 0;
    float profit = 0;
    printf("Enter value of hours: ");
    scanf("%d", &hours);
    if(hours > 40) {
        salary = 400 + (hours - 40) * 15;
        if(salary > 450) {
            tax = 300 * FIRST_TAX + 150 * SECOND_TAX + (salary - 450) * THIRD_TAX;
            profit = salary - tax;
        } else {
            tax = 300 * FIRST_TAX + (salary - 300) * SECOND_TAX;
            profit = salary - tax;
        }
    } else {
        salary = hours * 10;
        if(salary > 300) {
            tax = 300 * FIRST_TAX + (salary - 300) * SECOND_TAX;
            profit = salary - tax;
        } else {
            tax = salary * FIRST_TAX;
            profit = salary - tax;
        }
    }
    printf("%d - hours\n%.2f - salary\n%.2f - tax\n%.2f - profit",
    hours, salary, tax, profit);
}