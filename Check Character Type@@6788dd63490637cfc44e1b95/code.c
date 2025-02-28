#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int n;

    if(ch=='a' && ch=='e' && ch=='i' && ch=='o' && ch=='u'){
        printf("Vowel");
    }
    else if(ch!='a' || ch!='e' || ch!='i' || ch!='o' || ch!='u'){
        printf("Consonant");
    }
    else if(isdigit(n)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}