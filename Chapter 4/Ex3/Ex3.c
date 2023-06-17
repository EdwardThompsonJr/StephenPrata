#include <stdio.h>

int main(void) {
    float num;
    printf("Type your float number: ");
    scanf("%f", &num);
    printf("Your float number is: %.1f or %.1e\n", num, num);
    printf("Your float number is: %+.3f or %.3e\n", num, num);
    printf("\n\n");
}