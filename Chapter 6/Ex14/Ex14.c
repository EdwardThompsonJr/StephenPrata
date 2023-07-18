#include <stdio.h>

void main(void) {
    int counter = 0;
	char str[256] = {0};
    char letter = 0;
    char* ptr = str;
    for(int i = 0; i < sizeof(str) - 1; i++) {
        scanf("%c", &letter);
        if(letter == '\n') {
            break;
        }
        *ptr = letter;
        ptr += 1;
        counter += 1;
    }
    ptr -= 1;
    for(int i = 0; i < counter; i++) {
        printf("%c", *ptr);
        ptr -= 1;
    }
}
