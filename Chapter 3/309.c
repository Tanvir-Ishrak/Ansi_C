#include <stdio.h>

int main(){
    int x;
    printf("Input among 0 to 128:");
    scanf("%d",&x);
    if(x>0 && x<=128) printf("ASCII character of %d is %c",x,x);

    return 0;
}
