#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("it is positive");
    }
    else if(a<0)
    {
        printf("it is negative");
    }
    else
    {
        printf("it is zero");
    }
    return 0;
}
