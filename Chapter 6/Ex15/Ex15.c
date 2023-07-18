#include <stdio.h>

int main(void) {
    float dafna = 100;
    float deidra = 100;
    int years = 0;
    while(deidra <= dafna) {
        dafna += 100 * 0.1;
        deidra += deidra * 0.05;
        years += 1;
    }
    printf("%d years;\n", years);
    printf("Dafna: %.2f\nDeidra: %.2f", dafna, deidra);
}