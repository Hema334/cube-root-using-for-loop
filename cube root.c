/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
    int a,num,cube;
    printf("please enter a number:");
    scanf("%d",&num);
    for(a=1;a<=num;a++)
    {
        cube=a*a*a;
    }
    printf("%d",cube);
}