//Відповідно до індивідуального варіанту:
//-	скласти блок-схему алгоритму
//-	написати програму для обчислення суми нескінченного ряду,
// підсумовуючи члени ряду, значення яких за модулем перевищують задану точність s = 10 -4.
//Визначити кількість доданків.
//Обчислення виконати для х (-2 < x < 2).
//По можливості, створити варіанти програм,
// що будуть містить різні структури повторення (for, while, do/while)
#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double s = pow(10, -4);
    double sum = 0.0;
    double temp;
    int k = 1;

    printf("Введіть значення x (-2 < x < 2): ");
    scanf("%lf", &x);

    if(x <= -2 || x >= 2) {
        printf("Неправильне значення x. Будь ласка, введіть число з діапазону (-2 < x < 2).\n");
        return 0;
    }

    do {
        temp = k * (2*k + 1);
        double fact = 1;
        for(int i = 1; i <= temp; i++) {
            fact *= i;
        }
        temp = pow(-1, k) * pow(x, k+2) / fact;
        sum += temp;
        k++;
    } while(fabs(temp) > s);

    printf("Сума ряду: %.4lf\n", sum);
    printf("Кількість доданків: %d\n", k);

    return 0;
}