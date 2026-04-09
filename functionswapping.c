//program to perform swapping of two numbers
#include<stdio.h>
void display(int,int);
int main()
{
int a,b;
printf("enter the a and b values:\n");
scanf("%d%d",&a,&b);
display(a,b);
}
void display(int a,int b)
{
int t=a;
a=b;
b=t;
printf("a=%d\nb=%d\n",a,b);
}
