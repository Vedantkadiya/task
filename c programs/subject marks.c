/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m1,m2,m3,total,maintotal=300;
    float percent;
    printf("enter the maths marks:");
    scanf("%d",&m1);
    printf("enter the physics marks:");
    scanf("%d",&m2);
    printf("enter the computer marks");
    scanf("%d",&m3);
    total=m1+m2+m3;
    printf("total of all 3 subjects is %d\n",total);
    percent=total*100/maintotal;
    printf("percentage is %f\n",percent);
    return 0;
}
