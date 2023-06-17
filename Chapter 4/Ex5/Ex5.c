#include <stdio.h>
#include <string.h>

int main(void) {
    char name[2][20] = {0};
    printf("Type your name and surname: ");
    scanf("%s %s", name[0], name[1]);
    printf("%s %s\n", name[0], name[1]);
    printf("%*zd %*zd\n", (int)strlen(name[0]), strlen(name[0]),
    (int)strlen(name[1]), strlen(name[1]));
    printf("%s %s\n", name[0], name[1]);
    printf("%-*zd %-*zd\n", (int)strlen(name[0]), strlen(name[0]),
    (int)strlen(name[1]), strlen(name[1]));
    printf("\n\n");
}