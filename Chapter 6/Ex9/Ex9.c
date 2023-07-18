#include <stdio.h>

int main(void) {
    int upper_limit = 0;
    int lower_limit = 0;
    printf("Enter lower & upper limits: ");
    while(scanf("%d %d", &lower_limit, &upper_limit)) {
	if(lower_limit >= upper_limit) {
		break;
	}
	int res = 0;
	for(int i = lower_limit; i <= upper_limit; i++) {
	        res += i * i;
    	}
    	printf("Summ of squares from %d to %d: %d\n", lower_limit, upper_limit, res);
	printf("Enter lower & upper limits: ");
    }
    printf("Work's done.\n");
}
