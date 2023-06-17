#include <stdio.h>
int one_three(void);
int two(void);

int main(void) {
    printf("start now:\n");
    one_three();
    printf("sector clear.");
    printf("\n\n");
}

int one_three() {
    printf("one\n");
    two();
    printf("three\n");
}

int two(void) {
    printf("two\n");
}