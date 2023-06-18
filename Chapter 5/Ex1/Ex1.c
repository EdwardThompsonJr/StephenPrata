// Task: Напишите программу, которая переводит время в минутах во время в часах и
// минутах. Воспользуйтесь инструкциями #define или const для создания сим­
// вольной константы со значением 60. Используйте цикл while, чтобы обеспе­чить 
// пользователю возможность повторного ввода значений и для прекраще­
// ния цикла, если вводится значение времени, меньшее или равное нулю.

#include <stdio.h>
#define HOURS 60
#define DAYS 24

int main(void) {
    int input = 1;
    int minutes = 0;
    int hours = 0;
    int days = 0;
    int values[4] = {0};
    char ending[4] = {0};
    printf("Type amount of minutes (\"q\" or \"0\" to exit): ");
    while(scanf("%d", &input) && input != 0) {
        if(input < 0) {
            printf("Incorrect input: values must be positive. ");
            printf("Try again.\n");
            printf("Type amount of minutes (\"q\" or \"0\" to exit): ");
            while(scanf("%d", &input) && input < 0) {
                printf("Incorrect input: values must be positive. ");
                printf("Try again.\n");
                printf("Type amount of minutes (\"q\" or \"0\" to exit): ");
            }
            if(input < 0) {
                break;
            }
        }
        minutes = input;
        hours = (minutes / HOURS) % DAYS;
        days = minutes / (HOURS * DAYS);
        minutes = minutes % HOURS;
        values[0] = input; values[1] = minutes; 
        values[2] = hours; values[3] = days;
        for(int i = 0; i < 4; i++) {
            switch(values[i]) {
            case 1:
                ending[i] = 127;
                break;
        
            default:
                ending[i] = 115;
                break;
            }
        }
        printf("%d minute%c is a %d day%c, %d hour%c and %d minute%c.\n",
        input, ending[0], days, ending[3],
        hours, ending[2], minutes, ending[1]);
        printf("Type amount of minutes (\"q\" or \"0\" to exit): ");
    }
    printf("\n\n");
}