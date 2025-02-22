#include<stdio.h>
int main()
{
    char ch;
    scanf("%s",ch);
    if(65<=ch<=90){
        printf("Uppercase");
    }
    else if(97<=ch<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}