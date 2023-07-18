#include <stdio.h>
#include <string.h>

void main(void) {
	char word[20] = {0};
	printf("Enter any word: ");
	scanf("%s", word);
	printf("Reversed word is: ");
	for(int i = strlen(word); i >= 0; i--) {
		printf("%c", word[i]);
	}
	printf("\n");
}
