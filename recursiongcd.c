//program to print GCD of two numbers by using recursions
#include<stdio.h>
int gcd(int,int);
int main()
{
int n1,n2,f;
printf("enter n1 and n2 values\n");
scanf("%d%d",&n1,&n2);
f=gcd(n1,n2);
printf("GCD of the numbers is %d",f);
}
int gcd(int n1,int n2)
{
int f;
if(n2!=0)
{
f=gcd(n2,n1%n2);
return f;
}
else
{
return n1;
}
}
