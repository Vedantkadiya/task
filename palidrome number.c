
#include <stdio.h>

int main()
{
    int num,rem,rev=0,ori;
    printf("enter the number:");
    scanf("%d",&num);
    ori=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(ori==rev)
    {
        printf("%d is the paildrome number",rev);
    }
    else
    {
        printf("%d is not the palidrome number",ori);
    }

    return 0;
}
