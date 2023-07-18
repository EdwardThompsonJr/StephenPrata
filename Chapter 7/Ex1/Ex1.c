#include <stdio.h>
#include <ctype.h>

int main(void) {
    int space = 0;
    int new_line = 0;
    int symbols = 0;
    char ch = 0;
    while(ch != '#') {
        ch = getchar();
        switch(ch) {
        case ' ':
            space += 1;
            break;
        case '\n':
            new_line += 1;
            break;
        default:
            if(ch != '#') {
                symbols += 1;
            }
            break;
        }
    }
    printf("spaces: %d\nnew line symbols: %d\nother symbols: %d",
    space, new_line, symbols);
}