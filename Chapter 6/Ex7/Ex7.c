#include <stdio.h>

void main(void) {
	float num_one = 0;
	float num_two = 0;
	printf("Enter 2 float numbers: ");
	while(scanf("%f %f", &num_one, &num_two)) {
		float dif = num_one - num_two;
		float mul = num_one * num_two;
		float res = dif / mul;
		printf("Result: ");
		printf("%.2f\n", res);
		printf("Enter 2 float numbers: ");
	}
}
