#include <stdio.h>

int main ()
{
    int x;
    printf("Введіть x\n");
    scanf("%d",&x);

    if (x>10)
        printf("ERROR!!!");
    if (x<-5)
        printf("y=%d",x*x*x -2);
    if (x>=1)
        if (x<=10)
            printf("y=%d",x*x*x -2);
    if (x>-5)
        if (x<=0)
            printf("y=%d",x*x +5);
    return 0;

}