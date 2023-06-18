#include <stdio.h>

int main(void) {
    float cm;
    float m;
    char name[20];
    printf("Type your height in cm and name: ");
    scanf("%f %s", &cm, name);
    m = cm / 100;
    printf("%s, your height in metres is %.2fm.", name, m);
    printf("\n\n");
}