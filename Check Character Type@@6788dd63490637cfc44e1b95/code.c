#include<stdio.h>
int main()
{
    char ch;
    if(ch=='a' && ch=='e' && ch=='i' && ch=='o' && ch=='u'){
        printf("Vowel");
    }
    else if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u'){
        printf("Consonant");
    }
    return 0;
}