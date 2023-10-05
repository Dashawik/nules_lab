#include <stdio.h>

float main() {
    int x;
    printf("Введіть x\n");
    scanf("%f",&x);
    if ((x>10)||(x>=0 && x<1)||(x==-5))
        printf("ERROR!!!");

    if (  (x<-5)|| ((x>=1)&&(x<=10)))
        printf("y=%f",x*x*x-2);
    if ((x>-5)&& (x<0))
        printf("y=%f",x*x+5);

    return 0;
}
