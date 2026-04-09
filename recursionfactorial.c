//program to calculate factorial of a number using recursions
#include<stdio.h>
int fact(int);
int main()
{
int n;
printf("enter n value\n");
scanf("%d",&n);
int f=fact(n);
printf("%d",f);
}
int fact(int n)
{
if(n==1)//when the given n value becomes 1 in the above formula(n*fact(n-1))
{
return 1;//then it returns 1
}
else
{
return n*fact(n-1);//ex:let n=3,3*fact(3-1)=3*2!;again n=2,2*fact(2-1)=2*1!
}                 //3*2*1=6
}
