#include<stdio.h>//to check the number is palindrome/not
int main()
{
int n,b,r=0,c;
printf("enter any number\n");
scanf("%d",&n);
c=n;
while(n>0)
{
b=n/10;
r=r*10+b;
n=n/10;
}
if(c==r)
printf("the number is palindrome");
else
printf("the number is not palindrome");
return 0;
}
