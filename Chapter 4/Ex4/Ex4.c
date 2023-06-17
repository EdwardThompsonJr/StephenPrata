#include <stdio.h>

int main(void) {
    float sm;
    float m;
    char name[20];
    printf("Type your height in sm and name: ");
    scanf("%f %s", &sm, name);
    m = sm / 100;
    printf("%s, your height in metres is %.2fm.", name, m);
    printf("\n\n");
}