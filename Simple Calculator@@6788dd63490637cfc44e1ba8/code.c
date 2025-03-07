#include<stdio.h>
int main()
{
    int a,b;
    char op;
    if(scanf("%d %d %c",&a,&b,&op) ! 3){
        printf("error\n");
        return 1;
    }
    switch(op){
        case '+':
            printf("%d\n",a+b);
            break;
        case '-';
             printf("%d\n",a-b);
            break;
        case '*';
            printf("%d\n",a*b);
            break;
        case '/':
            if(b == 0){
                printf("error\n");
            }
            else{
                printf("%d\n",a/b)
            }
            break;
        default:
            printf("error\n");
            break;
    }
    return 0;
}