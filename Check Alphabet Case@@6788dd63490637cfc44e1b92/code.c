#include<stdio.h>
int main()
{
    char ch;
    scanf("%s",ch);
    if(90<=ch<=65){
        printf("Uppercase");
    }
    else if(122<=ch<=97){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}