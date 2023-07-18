#include <stdio.h>
#include <string.h>

int main(void) {
	int nums[8] = {0};
	printf("Enter 8 decimal numbers: ");
	for(int i = 0; i < sizeof(nums) / 4; i++) {
		scanf("%d", &nums[i]);
	}
	printf("Reverse order of you numbers: ");
	for(int i = 0; i < sizeof(nums) / 4; i++) {
		printf("%d ", nums[(sizeof(nums) / 4 - 1) - i]);
	}
	printf("\n");
}
