#include <stdio.h>

int main()
{
    char x;
    printf("enter any alphabet:");
    scanf("%c",&x);
    if(x=='a'||x=='i'||x=='e'||x=='o'||x=='u')
    {
        printf("the enter alphabet is vowel");
    }
    else
    {
        printf("the enter alphabet is consonant");
    }
    return 0;
}
