#include <stdio.h>
#include <float.h>

int main(void) {
    double doub = 1.0/3.0;
    float floa = 1.0/3.0;
    printf("%.4f %.4f\n%.12f %.12f\n%.16f %.16f\n", doub, 
    floa, doub, floa, doub, floa);
    printf("%d %d", DBL_DIG, FLT_DIG);
    printf("\n\n");
}