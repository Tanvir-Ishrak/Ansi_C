#include <stdio.h>

int main(){
    int a,i,pos=0,neg=0;
    for(i=1;;i++){
        scanf("%d",&a);
        if(a==0) break;
        else if(a>0) pos++;
        else neg++;
    }
    printf(" Number of positive numbers: %d\n",pos);
    printf(" Number of negative numbers: %d\n",neg);

    return 0;
}
