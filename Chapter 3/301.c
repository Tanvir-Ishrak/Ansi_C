#include <stdio.h>

int main(){
    int a,i;
    float sum=0;
    scanf("%d",&a);
    for ( i = 1; i <= a; i++)
    {
       sum=sum+(1/(float)i);
    }
    printf("%f",sum);
    

    return 0;
}
