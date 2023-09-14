#include <stdio.h>
//крутой комент
int
main ()
{
    float x;
    printf("Enter x\n");
    scanf("%f",&x);

    if (x>10)
        printf("error");
    if (x<10)
        if (x>=1)
            printf("y=%f",x*x*x -2);
    if (x<0)
        if (x>-5)
            printf("y=%f",x*x +5);
    if (x<-5)
        printf("y=%f",x*x*x -2);



    return 0;

}