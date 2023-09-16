#include <stdio.h>

int main() {
    float x;
    printf("Введіть x\n");
    scanf("%f",&x);
    if (x>10)
        printf("ERROR!!!");
    if ((x<-5))
        printf("y=%f",x*x+5);
    if (  (x>-5)|| ((x>=1)&&(x<10)))
        printf("y=%f",x*x*x-2);
    return 0;
}
