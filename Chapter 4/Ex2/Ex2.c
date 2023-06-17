#include <stdio.h>
#include <string.h>

int main(void) {
    char name[40];
    printf("Type your name: ");
    scanf("%s", name);
    printf("So your name is \"%s\"\n", name);
    printf("So your name is \"%20s\"\n", name);
    printf("So your name is \"%-20s\"\n", name);
    printf("So your name is \"%*s\"\n", (int)strlen(name) + 3, name);
    printf("\n\n");
}