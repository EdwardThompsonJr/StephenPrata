#include <stdio.h>

void main(void) {
	int upper_limit = 0;
	int lower_limit = 0;
	printf("Enter upper limit: ");
	scanf("%d", &upper_limit);
	printf("Enter lower limit: ");
	scanf("%d", &lower_limit);
	for(int i = upper_limit; i <= lower_limit; i++) {
		printf("%d %d %d", i, i * i, i * i * i);
		printf("\n");
	}
}
