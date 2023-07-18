#include <stdio.h>

float calculation(float num_one, float num_two);

void main(void) {
	float num_one = 0, num_two = 0;
	printf("Enter 2 float numbers: ");
	while(scanf("%f %f", &num_one, &num_two)) {
		float res = calculation(num_one, num_two);
		printf("Result: ");
		printf("%.2f\n", res);
		printf("Enter 2 float numbers: ");
	}
}

float calculation(float num_one, float num_two) {
	float res = (num_one - num_two) / (num_one * num_two);
	return res;
}
