#include<stdio.h>
//int recfact(int);
int main()
{
int n,a,b;
printf("enter the number\n");
scanf("%d",&n);
a=recfact(n);
printf("the factorial of a given number using recursion is %d\n",a);
b=nonrecfact(n);
printf("the factorial of a given number using nonrecursion is %d\n",b);
}
int recfact(int n)
{
int f;
if(n==0)
{
return 1;
}
else
{
f=n*recfact(n-1);
return f;
}
}
int nonrecfact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return 1;
}
