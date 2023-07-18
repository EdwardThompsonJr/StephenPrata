#include <stdio.h>

void main(void) {
	double first_arr[8] = {0};
	double second_arr[8] = {0};
	for(int i = 0; i < sizeof(first_arr) / 8; i++) {
		first_arr[i] = i + 1;
		if(i == 0) {
			second_arr[i] = first_arr[i];
		} else {
			second_arr[i] = second_arr[i - 1] + first_arr[i];
		}
	}
	printf("First array: ");
	for(int i = 0; i < sizeof(first_arr) / 8; i++) {
		printf("%5.2f ", first_arr[i]);
	}
	printf("\nSecond array: ");
	for(int i = 0; i < sizeof(first_arr) / 8; i++) {
                printf("%5.2f ", second_arr[i]);
        }
	printf("\n");
}
