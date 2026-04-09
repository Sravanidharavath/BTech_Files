#include<stdio.h>
int main()
{
int n,i,c;
int a=0,b=1;
printf("enter the number\n");
scanf("%d",&n);
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
printf("%d\n",c);
}
}
