#include<stdio.h>
int main()
{
    int integer;
    scanf("%d",integer);
    if(65<=integer<=90){
        printf("Uppercase");
    }
    else if(97<=integer<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}