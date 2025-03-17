#include <stdio.h>

int main() {
    float ricePrice, sugarPrice;

    printf("Enter the price of 1 kg of rice: Rs. ");
    scanf("%f", &ricePrice);
    printf("Enter the price of 1 kg of sugar: Rs. ");
    scanf("%f", &sugarPrice);

    printf("\n*** LIST OF ITEMS ***\n");
    printf("Item\tPrice\n");
    printf("Rice\tRs %.2f\n", ricePrice);
    printf("Sugar\tRs %.2f\n", sugarPrice);

    return 0;
}



