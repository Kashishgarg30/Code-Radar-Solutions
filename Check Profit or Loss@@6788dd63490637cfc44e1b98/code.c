#include<stdio.h>
int main()
{
    int sp,cp;
    if(sp>cp){
        printf("Profit");
    }
    else if(cp==sp){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}