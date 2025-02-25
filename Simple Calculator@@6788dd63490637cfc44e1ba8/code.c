#include<stdio.h>
int main()
{
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    printf("%d %d %c",a,b,op);
    switch(op);
    {
        case '+':
        printf("%d"char+"%d");
        break;
        case '-';
        printf("%d"char-"%d");
        break;
        case '*';
        printf("%d"char*"%d");
        break;
        case '/':
        printf("%d"char/"%d");
        break;
        default:
        printf("error");
    }
    return 0;
}