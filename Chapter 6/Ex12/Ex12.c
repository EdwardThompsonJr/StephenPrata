#include <stdio.h>

int main(void) {
	int arr[8] = {2};
	for(int i = 1; i <= sizeof(arr) / 4; i++) {
		arr[i] = arr[i-1] * 2;
	}
	int i = 0;
	do {
		printf("%d ", arr[i]);
		i++;
	} while(i < 9);
	printf("\n");
}
