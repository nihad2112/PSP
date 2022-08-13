/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14159
void main()
{
    float I,Im,deg,omega,t,phi,xL,xC;
    float rad=(deg*pi)/180;
    printf("Enter value of inductive reactance(unit in ohm) and capacitive reactance(unit in ohm):\n");
    scanf("%f%f",&xL,&xC);
    if(xL==xC)
    {
        printf("Enter the value of peak current(ampere),omega(hertz) and time(seconds):\n");
        scanf("%f%f%f",&Im,&omega,&t);
        I=Im*sin(omega)*t;
        printf("The value of current is %f ampere",I);
    }
    else if(xL>xC)
    {
        printf("Enter the value of peak current(ampere),omega(hertz),time(seconds) and phi(degrees):\n");
        scanf("%f%f%f%f",&Im,&omega,&t,&phi);
        I=Im*sin(omega*t-phi);
        printf("The value of current is %f ampere",I);
    }
    else 
    {
        printf("Enter the value of peak current(ampere),omega(hertz),time(seconds) and phi(degrees):\n");
        scanf("%f%f%f%f",&Im,&omega,&t,&phi);
        I=Im*sin(omega*t+phi);
        printf("The value of current is %f ampere",I);
    }
    getch();
}
