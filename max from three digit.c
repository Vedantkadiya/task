#include <stdio.h>

int main()
{
    int num,rem,large=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        if(rem>large)
        {
            large=rem;
        }
        num=num/10;
    }
    printf("the largest number among them is :%d",large);

    return 0;
}
