#include <stdio.h>
#define BANK 1000000

int main(void) {
    float bank = BANK;
    int years = 1;
    while(bank > 0) {
        if(bank - 100000 > 0) {
            bank -= 100000;
            printf("%f - bank\n", bank);
            printf("%d - year\n", years);
        } else {
            break;
        }
        bank += BANK * 0.08;
        years += 1;
    }
    printf("%d years;", years - 1);
}