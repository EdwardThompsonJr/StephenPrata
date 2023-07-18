#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch = 0;
    while((ch = getchar()) != '#') {
        if(ch == '.') {
            ch = '!';
        } else if(ch == '!') {
            putchar(ch);
        }
        putchar(ch);
    }
}