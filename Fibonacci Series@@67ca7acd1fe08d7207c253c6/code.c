#include<stdio.h>
int fibonacciSeries(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fibonacciSeries(n-1)+ fibonacciSeries(n-2);
    
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid imput\n");
        return 1;
    }

        return 0;
    }
