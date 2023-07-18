#include <stdio.h>

void main(void) {
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j <= i; j++) {
			printf("%c", 70 - j);
		}
		printf("\n");
	}
}
