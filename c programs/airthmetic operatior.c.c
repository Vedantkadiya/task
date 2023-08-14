/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int a, b, sum,sub, divi, mul, mod,inc,dec;
  printf ("enter the first number");
  scanf ("%d", &a);
  printf ("enter the second number");
  scanf ("%d", &b);
  sum = a + b;
  printf ("addition is %d\n", sum);
  sub = a - b;
  printf ("subtraction is %d\n", sub);
  divi = a / b;
  printf ("division is %d\n", divi);
  mul = a * b;
  printf ("multiplication is%d\n", mul);
  mod = a % b;
  printf ("modulo is %d\n", mod);
   inc=a++;
  printf ("increment is %d\n",inc);
  dec=b--;
  
  printf ("decrement is %d\n",dec);
  return 0;
}
