#include <stdio.h>

void main(void) {
	char alph[26] = {0};
	printf("Alphabet:\n");
	for(int i = 0; i < sizeof(alph); i++) {
		alph[i] = 97 + i;
		printf("%c ", alph[i]);
	}
	printf("\n\n");
}
