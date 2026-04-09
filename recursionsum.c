#include<stdio.h>
int sum(int);
int main()
{
int n;
printf("enter the n value\n");
scanf("%d",&n);
n=sum(n);
printf("%d",n);
}
int sum(int n)
{
int s=0;
if(n==1)
{
return 1;
}
else
{
s=n+sum(n-1);
return s;
}
}

