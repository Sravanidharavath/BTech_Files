#include<stdio.h>
int main()
{
int a=0,b=1,c,i,n;
printf("enter the range");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
c=i;
printf("%d",c);
}
c=a+b;
a=b;
b=c;
}
