//without arguement,with return type
#include<stdio.h>
int sum();
int sum()
{
int a,b,c;
printf("enter a,b values\n");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}
int main()
{
int s=sum();
printf("sum=%d",s);
}
