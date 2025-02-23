#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0;
    for(i=2;i<n;i++)
    if((a>1 && a%1==0) || (a%2!=0 && a%a==0)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}