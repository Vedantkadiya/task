/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int days,pd,salary;
    printf("enter the number of working days:");
    scanf("%d",&days);
    printf("enter the salary you obtain daily:");
    scanf("%d",&pd);
    salary=days*pd;
    printf("salary you obtain this month is %d",salary);

    return 0;
}
