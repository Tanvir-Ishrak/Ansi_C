#include <stdio.h>

int main(){
    int day,years,weeks,days;
    printf("Input number of days:");
    scanf("%d",&day);

    years=day/365;
    day=day%365;
    weeks=day/7;
    day=day%7;
    days=day;
    printf("Years:%d\n Weeks:%d\n Days:%d\n",years,weeks,days);


    return 0;
}
