#include<stdio.h>//program to finding roots of a quadratic equation
#include<math.h>
int main()
{
int a,b,c;
float r1,r2,x;
printf("enter a,b,c values\n");
scanf("%d%d%d",&a,&b,&c);
x=sqrt(b*b-4*a*c);
r1=(-b+x)/(2*a);
r2=(-b-x)/(2*a);
printf("roots are %.2f and %.2f",r1,r2);
}
