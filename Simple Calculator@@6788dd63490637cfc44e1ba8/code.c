#include<stdio.h>
int main()
{
    int a,b,c;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    printf("%d %d %c",a,b,op);
    c=a op b;

    switch(op);
    {
        case '+':
            printf("c");
            break;
        case '-';
             printf("c");
            break;
        case '*';
            printf("c");
            break;
        case '/':
            printf("c");
            break;
        default:
            printf("error");
    }
    return 0;
}