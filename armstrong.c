
#include <stdio.h>

int main()
{
    int num,ori,i,rem,arm=0;
    printf("enter the number you want to check:");
    scanf("%d",&num);
    ori=num;
    while(num!=0)
    {
        rem=num%10;
        arm=arm+(rem*rem*rem);
        num=num/10;
    }
    if(arm==ori)
    {
        printf("%d is an armstrong number:",arm);
    }
    else
    {
        printf("%d is not an armstrong number:",ori);
    }

    return 0;
}
