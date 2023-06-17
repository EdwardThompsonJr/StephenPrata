#include <stdio.h>

int main(void) {
    for(int i = 0; i < 6; i++) {
        printf("smile! ");
        if(i == 4 || i == 2) {
            printf("\n");
        }
    }
    printf("\n\n");
}