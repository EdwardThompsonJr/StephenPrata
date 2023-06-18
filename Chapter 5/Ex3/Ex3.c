// Напишите программу, которая требует от пользователя ввести количество
// дней, а затем переводит это значение в количество недель и дней. Например,
// она переводит 18 дней в 2 недели и 4 дня. Отобразите результаты в следующем
// формате: 18 дней составляют 2 недели и 4 дня.
// Используйте цикла while, чтобы дать пользователю возможность многократно­го 
// ввода количества дней и закончить цикл, для чего пользователь должен
// ввести неположительное значение, например, О или -20.
#include <stdio.h>
#define WEEK 7

int main(void) {
    int input = 1;
    int days = 0;
    int weeks = 0;
    int values[3] = {0};        // need to set up correct amount of elements or stack smashing -> sigfault !
    char ending[3] = {0};
    printf("Type amount of days (\"q\" or \"0\" to exit): ");
    while(scanf("%d", &input) && input != 0) {
        if(input < 0) {
            printf("Incorrect input: values must be positive. ");
            printf("Try again.\n");
            printf("Type amount of days (\"q\" or \"0\" to exit): ");
            while(scanf("%d", &input) && input < 0) {
                printf("Incorrect input: values must be positive. ");
                printf("Try again.\n");
                printf("Type amount of days (\"q\" or \"0\" to exit): ");
            }
            if(input < 0) {
                break;
            }
        }
        days = input;
        weeks = input / WEEK;
        days = days % WEEK;
        values[0] = input; values[1] = days; 
        values[2] = weeks;
        for(int i = 0; i < 3; i++) {
            switch(values[i]) {
            case 1:
                ending[i] = 127;
                break;
            
            default:
                ending[i] = 115;
                break;
            }
        }
        printf("%d day%c is a %d week%c and %d day%c\n",
        input, ending[0],
        weeks, ending[2],
        days, ending[1]);
        printf("Type amount of days (\"q\" or \"0\" to exit): ");
    }
    printf("\n\n");
}