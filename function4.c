//with arguement,with return type
#include<stdio.h>
int sum(int,int);
int main()
{
int a,b,c;
printf("enter a,b values\n");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("%d",c);
}
int sum(int a,int b)
{
int z=a+b;
return z;
}
