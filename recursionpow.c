#include<stdio.h>
#include<math.h>
int recpow(int,int);
int main()
{
int x,n,p;
printf("enter the values of x,n\n");
scanf("%d%d",&x,&n);
p=recpow(x,n);
printf("power of the number is %d\n",p);
}
int recpow(int x,int n)
{
int f;
if(n==0)
{
return 1;
}
else
{
f=x*recpow(x,n-1);
return f;
}
}
