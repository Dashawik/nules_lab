#include <stdio.h>

int main ()
{
    float x;
    printf("Введіть x\n");
    scanf("%f",&x);

    if (x>10)
        printf("ERROR!!!");
    if (x==-5)
        printf("ERROR!!!");
    if (x>=0)
        if(x<1)
            printf("ERROR!!!");
    if (x<-5)
        printf("y=%f",x*x*x -2);
    if (x>=1)
        if (x<=10)
            printf("y=%f",x*x*x -2);
    if (x>-5)
        if (x<0)
            printf("y=%f",x*x +5);
    return 0;

}