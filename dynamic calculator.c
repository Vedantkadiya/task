#include <stdio.h>
int main()
{
    char c;
    int a,b;
    printf("enter + for addition \n");
    printf("enter - for subtraction\n");
    printf("enter * for multiplication\n");
    printf("enter / for division\n");
    printf("enter modulo for remainder\n");
    printf("enter your choice from the above:\n");
    scanf("%c",&c);
    printf("enter the value of number 1:");
    scanf("%d",&a);
    printf("enter the value of number 2:");
    scanf("%d",&b);
    switch(c)
    {
        case '+':
                printf("the sum of %d and %d is %d",a,b,a+b);
                break;
        case '-':
                printf("the diffrence of %d and %d is %d",a,b,a-b);
                break;
        case '*':
                printf("the multiplication of %d and %d is %d",a,b,a*b);
                break;
        case '/':
                if(b!=0)
                {
                    printf("the division of %d and %d is %d",a,b,a/b);
                }
                else
                {
                    printf("error");
                }
                break;
        case '%':
                printf("The modulo of %d and %d is %d",a,b,a%b);
                break;
        default:
                printf("please enter the value from the above menu only");
            
                   
    }

    return 0;
}
