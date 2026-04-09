//without arguement,without return type 
#include<stdio.h>
void sum();//function defination
void sum()
{
int a,b,c;
printf("enter a,b values\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum=%d",c);
}
int main()
{
sum();//function calling
}

