#include <stdio.h>
#define PI 3.1416

int main(){
    float r,area;
    printf("Input the radious of a circle:");
    scanf("%f",&r);
    area=PI*r*r;
    printf("The area of this circle is %.2f",area);

    return 0;
}
