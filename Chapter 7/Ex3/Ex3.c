#include <stdio.h>
#include <ctype.h>

int main(void) {
    int even = 0;
    int odd = 0;
    int num = 1;
    int counter = 0;
    float avg_even = 0;
    float avg_odd = 0;
    while(scanf("%d", &num)) {
        if(num == 0) {
            break;
        }
        if(num % 2 == 0) {
            even += 1;
        } else {
            odd += 1;
        }
        counter++;
    }
    avg_even = (float)even / counter;
    avg_odd = (float)odd / counter;
    printf("even: %d\naverage even: %.2f\nodd: %d\naverage odd: %.2f",
    even, avg_even, odd, avg_odd);
}