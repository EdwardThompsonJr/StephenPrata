#include <stdio.h>
#include <math.h>

int main(void) {
    int testInt = 2147483647;
    printf("%d\n", testInt);
    testInt += 1;
    printf("%d\n\n", testInt);

    for(double i = 0; i < 50; i++) {
        float testFloat = (float)pow(10, i);
        double testDouble = pow(10, i);
        if(testFloat != testDouble) {
            printf("%.1lf\n", i);
            printf("%f\n", testFloat);
            printf("%lf\n\n", testDouble);
            break;
        }
    }

    float testFloat1 = 0.000001;
    printf("%f\n", testFloat1);
    testFloat1 /= 2;
    printf("%f\n", testFloat1);
    printf("\n\n");
}