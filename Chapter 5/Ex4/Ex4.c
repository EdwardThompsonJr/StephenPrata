// Напишите программу, которая просит пользователя ввести высоту в сантиметрах, 
// после чего отображает высоту в сантиметрах, а также в футах и дюймах.
// Разрешается также выводить дробные части сантиметров и дюймов, а програм­ма 
// должна обеспечить пользователю возможность продолжать ввод значений
// высоты до тех пор, пока не будет введе но неположительное значение. 
// Пример выполнения этой программы должен иметь следующий вид:
// Введите высоту в сантиметрах: 182
// 182.0 см = 5 футов, 11.7 дюймов
// Введите высоту в сантиметрах (<=О для выхода из программы)
// 168.0 см = 5 футов, 6.1 дюймов
// Введите высоту в сантиметрах (<= О для выхода из программы)
// Работа завершена.
#include <stdio.h>
#define INCH 0.393701
#define FOOT 12

int main(void) {
    float cm = 0;
    float inches = 0;
    int feet = 0;
    printf("Type height im sm (\"q\" or \"0\" to exit): ");
    while(scanf("%f", &cm) && cm != 0) {
        if(cm < 0) {
            printf("Incorrect input: values must be positive. ");
            printf("Try again.\n");
            printf("Type height im sm (\"q\" or \"0\" to exit): ");
            while(scanf("%f", &cm) && cm < 0) {
                printf("Incorrect input: values must be positive. ");
                printf("Try again.\n");
                printf("Type height im sm (\"q\" or \"0\" to exit): ");
            }
            if(cm < 0) {
                break;
            }
        }
        inches = cm * INCH;
        feet = inches / FOOT;
        inches = -(feet*FOOT - inches);
        printf("%.1f sm = %d feet, %.1f inches.\n",
        cm, feet, inches);
        printf("Type height im sm (\"q\" or \"0\" to exit): ");
    }
    printf("Work completed.");
    printf("\n\n");
}