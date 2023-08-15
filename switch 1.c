#include <stdio.h>

int main()
{
    int c;
    printf("enter 1 for monday\n");
    printf("enter 2 for tuesday\n");
    printf("enter 3 for wednesday\n");
    printf("enter 4 for thursday\n");
    printf("enter 5 for friday\n");
    printf("enter 6 for saturday\n");
    printf("enter 7 for sunday\n");
    printf("enter your choice from the above:\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
                printf("monday");
                break;
        case 2:
                printf("tuesday");
                break;
        case 3:
                printf("wednesday");
                break;
        case 4:
                printf("thursday");
                break;
        case 5:
                printf("friday");
                break;
        case 6:
                printf("saturday");
                break;
        case 7:
                printf("sunday");
                break;
    default:
            printf("please enter the number from the above menu");
                
    }
    return 0;
}
