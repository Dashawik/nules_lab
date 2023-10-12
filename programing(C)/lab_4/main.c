//Доробити програму таким чином, щоб на початку роботи користувач
// міг ввести кількість придбаних товарів, та отримати чек у такому вигляді:
//
//Товар № – ціна – кількість – до сплати
//
//… … … … … … … … … … … … …
//
//Загальна сума покупки: … грн.


#include <stdio.h>

int main() {
    int t, quantity, total_quantity;
    float total_cost ;

    printf("Доступний товар: \n1 - 29 грн. 80 коп.\n2 - 45 грн. 50 коп.\n3 - 9 грн. 98 коп.\n4 - 44 грн. 90 коп.\n5 - 67 грн. 80 коп.\n\n");

    printf("Введіть кількість товарів: ");
    scanf("%d", &total_quantity);



    for (int i = 1; i <= total_quantity; i++) {
        printf("Введіть номер товару %d (1-5): ", i );
        scanf("%d", &t);

        if (t < 1 || t > 5) {
            printf("Некоректний номер товару!\n");
            return 1;

        }

        printf("Введіть кількість товару: ");
        scanf("%d", &quantity);

        switch (t) {
            case 1:
                printf("\nТовар № - ціна - кількість - до сплати\n"
                       "%d - 29 грн. 80 коп. - %d - %2.2f гр\n", t, quantity, quantity * 29.80);
                total_cost += quantity * 29.80;
                break;
            case 2:
                printf("\nТовар № - ціна - кількість - до сплати\n"
                       "%d - 45 грн. 50 коп. - %d - %2.2f гр\n", t, quantity, quantity * 45.50);
                total_cost += quantity * 45.50;
                break;
            case 3:
                printf("\nТовар № - ціна - кількість - до сплати\n"
                       "%d - 9 грн. 98 коп. - %d - %2.2f гр\n", t, quantity, quantity * 9.98);
                total_cost += quantity * 9.98;
                break;
            case 4:
                printf("\nТовар № - ціна - кількість - до сплати\n"
                       "%d - 44 грн. 90 коп. - %d - %2.2f гр\n", t, quantity, quantity * 44.90);
                total_cost += quantity * 44.90;
                break;
            case 5:
                printf("\nТовар № - ціна - кількість - до сплати\n"
                       "%d - 67 грн. 80 коп. - %d - %2.2f гр\n", t, quantity, quantity * 67.80);
                total_cost += quantity * 67.80;
                break;
        }
    }

    printf("\nЗагальна сума покупки: %.2f грн.\n", total_cost);

    return 0;
}