#include <stdio.h>
#include <ctype.h>

int main(void) {
    int counter = 0;
    char curr = 0;
    char prev = 0;
    while((curr = getchar()) != '#') {
        counter += 1 ? curr == 'i' && prev == 'e' : 0;
        printf("\n%c - prev\n%c - curr", prev, curr);
        printf("\n%d - counter\n", counter);
        prev = curr;
    }
    printf("\n%d - number of \"ei\" complexes", counter);
}