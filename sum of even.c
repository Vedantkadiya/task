#include <stdio.h>

int main()
{
    int i,end,sum=0;
    printf("enter the end point:");
    scanf("%d",&end);
    for(i=1;i<=end;i++)
    {
        if(i%2==0)
        {
            sum+=i;
            printf("%d\t\n",i);
        }
    }
    printf("sum of the all the even number is:%d\n",sum);
    
    return 0;
}
