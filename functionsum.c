//program to creat a function name as sum and perform sum of two numbers using function 
#include<stdio.h>
void sum(int a,int b);
int main()
{
int a,b;
printf("enter the a,b values\n");
scanf("%d%d",&a,&b);
sum(a,b);
}
void sum(int a,int b)
{
int c=a+b;
printf("sum=%d",c);
}
