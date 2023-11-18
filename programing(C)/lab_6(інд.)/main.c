//Задана матриця цілих чисел розміром (N;N). Знайти максимальний
//елемент в зафарбованій області. Заборонено використання
//додаткових масивів.

#include <stdio.h>

int main() {

    const int n = 4;
    int arr[n][n] = {{1,  2,  3,  40},
                     {-3, 6,  7,  8},
                     {9,  10, 11, 12},
                     {13, 14, 15, -3}};

    int max = arr[0][0];
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            if (max < arr[i][j]) max = arr[i][j];

            // printf("%d\t", arr[i][j]);
        }
        // printf("\n");
    }

    for (int i = n / 2; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (max < arr[i][j]) max = arr[i][j];
            //  printf("%d\t", arr[i][j]);
        }
        //  printf("\n");

    }


    for (int i = n / 2; i < n; i++) {
        for (int j = n / 2; j < i + 1; j++) {
            if (max < arr[i][j]) max = arr[i][j];
            // printf("%d\t", arr[i][j]);
        }
        //  printf("\n");

    }

    printf("%d", max);

    return 0;
}



