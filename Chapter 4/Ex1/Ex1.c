#include <stdio.h>

int main(void) {
    char name[2][40] = {0};
    printf("Type your name and surname: ");
    scanf("%s %s", name[0], name[1]);
    printf("So, your name is: %s %s", name[0], name[1]);
    printf("\n\n");
}