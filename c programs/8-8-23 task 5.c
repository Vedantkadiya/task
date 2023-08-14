/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float pr;
    printf("enter the percentage you obtained:");
    scanf("%f",&pr);
    if(pr>60)
    {
        printf("A+");
        
    }
    else if(pr>30)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    return 0;
    
}
