//program to calculate nth term in a fibonacci series using recursions
#include<stdio.h>
int fib(int);
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
int f=fib(n);
printf("%d",f);
}
int fib(int n)
{
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
{
return fib(n-1)+fib(n-2);//ex:let n=3,fib(3-1)+fib(3-2)=fib(2)+fib(1);
}                      //again,fib(2-1)+fib(2-2)=fib(1)+fib(0)=1;
}                      //so,fib(2)=1+fib(1)=1
                       //output is 1+1=2
