//Організувати  виконання обчислення змінної P не менше 5 разів, з можливістю виходу з програми за натисненням Esc
//
//Для вирішення завдання ввести значення змінної х.
//
//Для обчислення А та В створити  відповідні функції.
//
//Крок змінення k  дорівнює 1.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

float A(float x) {
    int k = 1;
    float res = 0.0;
    while (k <= 3) {
        res += (4 * pow(k, 2) - 2) * x;
        k++;
    }
    return res;
}

float B(float x) {
    float res = 1.0;
    for (int k = 1; k <= 3; ++k) {
        res *= (2 * k) * x;
    }
    return res;
}

int main() {

    system("chcp 65001");

    int i = 0;

    while(1){
        float x = 0.0;
        printf("\nВведіть x:");
        scanf("%f", &x);

        float func = cos(A(x)) - sin(B(x));

        printf("\nРезулятат функції при x = %f, P - %f", x, func);
        if(i>=4){
            char ch;
            printf("\n\nНатисніть ESC для виходу або будь-яку іншу клавішу для продовження.\n");
            ch = getch();

            if (ch == 27) {
                printf("Програма завершена.\n");
                break;
            }
        }
        i++;
    }

    return 0;
}