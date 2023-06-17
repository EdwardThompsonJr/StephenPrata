#include <stdio.h>

int main(void) {
    int sm;
    printf("Type your heigth in sm: ");
    scanf("%d", &sm);
    printf("\nYour heigth in dyums is %.3f", sm/2.54);
    printf("\n\n");
}