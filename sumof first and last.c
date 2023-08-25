#include <stdio.h>

int main()
{
    int first_digit,last_digit,num,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    last_digit=num%10;
    while(num>10)
    {
        num=num/10;
    }
    first_digit=num;
    sum=first_digit+last_digit;
    printf("%d is the sum of %d and %d",sum,first_digit,last_digit);

    return 0;
}
