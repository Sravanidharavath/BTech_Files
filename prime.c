#include<stdio.h>//program to check number is prime/not
int main()
{
int n,i,count=0;
printf("enter a number to check prime or not:");
scanf("%d",&n);
for(i=1;i<=n;i++)
if(n%i==0)
count++;
if(count==2)
printf("the given number is prime");
else
printf("the given number is not prime");
return 0;
}























