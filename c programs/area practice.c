/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,l,b;
    float sq,cir,trian,rec;
    printf("enter the lenghth:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    printf("enter radius of circle:");
    scanf("%d",&r);
    sq=l*l;
    printf("area of square is:%f\n",sq);
    cir=3.14*r*r;
    printf("area of circle is:%f\n",cir);
    trian=0.5*l*b;
    printf("area of triangle is:%f\n",trian);
    rec=l*b;
    printf("area of rectangle is:%f\n",rec);
    
    
    return 0;
}
