#include <stdio.h>
#include <math.h>

int main() {
    int a = 5;
    int b = 3;
    float d = 10.0;
    float x, y;
    printf("Введіть значення x: ");
    scanf("%f", &x);
    printf("Введіть значення y: ");
    scanf("%f", &y);


    float t1 = a*b*y/3 + d/x *log(a*x +y);
    float t2 =1.0/2 *(log(y/x))-a*b/(2*y);

    printf("Значення t1: %f\n", t1);
    printf("Значення t2: %f\n", t2);

    return 0;
}
