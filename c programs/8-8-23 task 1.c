/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int d,ans,a,c;
    printf("enter the number of days:");
    scanf("%d",&d);
    ans=d/365;
    a=d%365;
    c=a/30;
    a=d%365%30;
    printf(" %d year %d days  and  %d month",ans,a,c);
    

    return 0;
}

