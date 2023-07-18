#include <stdio.h>

int main(void) {
	int iteration = 0;
	double res1 = 0;
	double res2 = 0;
	printf("Enter number of iterations: ");
	scanf("%d", &iteration);
	for(int i = 1; i <= iteration; i++) {
		res1 += 1.0 / i;
		if(i % 2) {
			res2 += 1.0 / i;
		} else {
			res2 -= 1.0 / i;
		}
	}
	printf("%.2f, %.2f", res1, res2);
	printf("\n");
}
