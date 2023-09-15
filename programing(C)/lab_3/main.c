#include <stdio.h>
//Одиниці маси пронумеровані таким чином: 1 – кілограм, 2 – міліграм, 3 – грам, 4 – тонна, 5 – центнер.
// Користувач вказує номер одиниці маси (ціле число в діапазоні [1…5] і масу тіла в цих одиницях (дійсне число).
// Знайти масу тіла в кілограмах.
int main()
{
 int x;
 float weight;
    printf("Виберіть номер одиниці маси\n"
           "1 -кілограм\n"
           "2 – міліграм\n"
           "3 – грам\n"
           "4 – тонна\n"
           "5 – центнер\n");
    scanf("%d",&x);
    printf("Введіть масу тіла:");
    scanf("%f",&weight);
    switch (x)
    {
        case 1:
            printf("%f кг",weight);
            break;
        case 2:
            printf("%f кг",weight*0.000001);
            break;
        case 3:
            printf("%f кг",weight*0.001);
            break;
        case 4:
            printf("%f кг",weight*1000);
            break;
        case 5:
            printf("%f кг",weight*100);
            break;
        default:
            printf("Error!");
    }

    return 0;
}
