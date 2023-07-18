// Напишите программу, которая запрашивает ввод числа типа float и 
// распеча­тывает значение куба этого числа. С этой целью воспользуйтесь функцией, 
// ко­торая возводит заданное значение в куб и распечатывает результат, но эту
// функцию вы должны реализовать самостоятельно. Программа main() должна
// передать вводимое значение этой функции.
#include <stdio.h>

float cube(float input);

int main(void) {
    float input;
    printf("Enter float typed number: ");
    scanf("%f", &input);
    cube(input);
    // float res = cube(input);
    // printf("%.2f", res);
    printf("\n\n");
}

float cube(float input) {
    float output = 1;
    for(int i = 0; i < 3; i++) {
        output *= input;
    }
    printf("%.2f", output);
    return output;
}