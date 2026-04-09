#include<stdio.h>//program to print fibonacci series
int main()
{
int i,c;
int n=5;
int a=0,b=1;
for(i=0;i<=n;i++)
{
if(i<=1)
{
c=i;
}
else
{
c=a+b;
a=b;
b=c;
}
printf("%d",c);
}
return 0;
}
//output=011235
