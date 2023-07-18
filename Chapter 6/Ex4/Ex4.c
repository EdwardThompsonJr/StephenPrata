#include <stdio.h>

void main(void) {
	char letter = 0;
	printf("Type a letter: ");
	scanf("%c", &letter);
	for(int i = 0; i < 5; i++) {
		printf("%*c", 5 - i, " ");
		char l = 0;
		for(int j = 0; j <= i; j++) {
			l = 65 + j;
			printf("%c", 65 + j);
		}
		for(int j = 1; j <= i; j++) {
			printf("%c", l - j);
		}
		printf("\n");
	}
}
