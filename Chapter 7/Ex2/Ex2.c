#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch = 0;
    int counter = 0;
    while((ch = getchar()) != '#') {
        if(ch != '\n') {
            printf("\"%c\" - %d ", ch, ch);
            counter += 1;
            if(counter % 8 == 0) {
                printf("\n");
            }
        } else {
            continue;
        }
    }
}