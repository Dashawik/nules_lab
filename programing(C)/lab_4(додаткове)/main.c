//Відповідно до варіанту обчислити значення функції для n=1,2,3,4,5.
//Програму написати за допомогою циклів
//for, while та  do/while.
//Порівняти результати

#include <stdio.h>
#include <math.h>




int main() {
    printf("Результат(for)\n");
    int n = 5;
    double y = 0;
    for (int i = 1; i <= n; i++) {
        double product = 1.0;
        for (int j = 1; j <= i; j++) {
            product *= pow(3, j) + i;
        }
        y += product / (5 * i);
        printf("Результат(for): y = %f при n = %d\n", y, i);
    }
    printf("\nРезультат(while)\n");



    n = 5;
    y = 0;
    int i = 1;
    while (i <= n) {
        double product = 1.0;
        int j = 1;
        while (j <= i) {
            product *= pow(3, j) + i;
            j++;
        }
        y += product / (5 * i);
        printf("Результат(while): y = %f при n = %d\n", y, i);
        i++;
    }



    printf("\nРезультат(do/while)\n");
    n = 5;
    y = 0;
    i = 1;
    do {
        double product = 1.0;
        int j = 1;
        do {
            product *= pow(3, j) + i;
            j++;
        } while (j <= i);
        y += product / (5 * i);
        printf("Результат(do/while): y = %f при n = %d\n", y, i);
        i++;
    } while (i <= n);


    return 0;
}
