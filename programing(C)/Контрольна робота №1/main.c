//Використовуючи циклічну структуру while
//
//Обчислити   добуток додатних значень функції Y= x4-4  в межах  -5<=x<=0 з кроком t=0.45
#include <stdio.h>
#include <math.h>

int
main() {
    double x = -5.0;
    double t = 0.45;
    double res = 1.0;

    while (x <= 0.0) {
        double y = pow(x, 4) - 4;
        if (y > 0.0) {
            res *= y;
        }
        x += t;
    }

    printf("Добуток додатних значень функції: %f\n", res);

    return 0;
}