#include <stdio.h>

int main() {
    float distance, fuel, mileage;

    printf("Enter the distance traveled by the car (in kilometers): ");
    scanf("%f", &distance);

    printf("Enter the fuel consumed by the car (in liters): ");
    scanf("%f", &fuel);

    if (fuel != 0) {
        mileage = distance / fuel;

        printf("The mileage of the car is %.2f km/l\n", mileage);
    } 
    else {
        printf("Fuel consumed cannot be zero. Please enter a valid value.\n");
    }

    return 0;
}
