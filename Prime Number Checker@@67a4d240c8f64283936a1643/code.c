#include<stdio.h>
int isPrime(int num){
    if(num <=1){
        return 0;
    }
   
    for(int t < 2 ; t<= num/2 ; t++){
        if(num%i==0){
            return 0;
        }

    }
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}