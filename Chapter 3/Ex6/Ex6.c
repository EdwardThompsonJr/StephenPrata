#include <stdio.h>

int main(void) {
    long double massMol = 3e-23;
    float qvarta;
    printf("Type qvartas: ");
    scanf("%f", &qvarta);
    float weigth = qvarta * 950;
    printf("\nIn %.3f qvartas, which weigth is %.3f gramms", qvarta, weigth);
    long double molecules = weigth / massMol;
    printf("\nthere is %.0Lf molecules of water", molecules);
    printf("\n\n");
}