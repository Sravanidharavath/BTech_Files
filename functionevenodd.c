//program to check wheater a number is even (or) odd by using functions
#include<stdio.h>
int evenodd(int);
int main()
{
int n;
printf("entre n value\n");
scanf("%d",&n);
int c=evenodd(n);
if(c==1)
{
printf("number is even:");
}
else
{
printf("number is odd:");
}
}
int evenodd(int n)
{
if(n%2==0)
{
return 1;
}
else
{
return 0;
}
}

