#include <stdio.h>

int main(void)
{
    int price, qty, senior;
    int total, net;
    int i;

    printf("JAN AUSHADHI PHARMACY BILLING\n");

    for (i = 1; i <= 3; i++)
    {
        printf("\nEnter details for Bill %d\n", i);

        printf("Enter price per item: ");
        scanf("%d", &price);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        printf("Senior citizen? (1 = Yes, 0 = No): ");
        scanf("%d", &senior);

        total = price * qty
              - price * qty * 15 / 100 * senior
              + price * qty * 5 / 100;

        net = total > 1000 ? total - 50 : total;

        printf("\nTotal amount = Rs.%d\n", total);
        printf("Net payable = Rs.%d\n", net);
    }

    return 0;
}
