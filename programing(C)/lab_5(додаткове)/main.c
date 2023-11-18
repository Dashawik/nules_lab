//21.    Напишіть функцію odd_number, яка отримує ціле число та визначає,
// чи є це число непарним.
// Програма завершується, коли користувач натисне клавішу ESC.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void odd_number(int a);


int main() {

    system("chcp 65001");

    int a;
    char ch;
    while (1) {

        printf("Введіть число - ");
        scanf("%d", &a);
        odd_number(a);
        printf("\nНатисніть ESC для виходу або будь-яку іншу клавішу для продовження.\n");
        ch = getch();

        if (ch == 27) {
            printf("Програма завершена.\n");
            break;
        }
    }

    return 0;
}


void odd_number(int a) {
    if (a % 2 != 0)
        printf("непарне");
    else
        printf("парне");
}