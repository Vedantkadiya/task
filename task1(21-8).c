#include <stdio.h>

int main()
{
    int i,end;
    printf("enter the number:");
    scanf("%d",&end);
    printf("even number is:");
    for(i=1;i<=end;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }

    return 0;
}
