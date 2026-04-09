//call by referance(referance means address)
#include<stdio.h>
void swap(int*,int*);
int main()
{
int a,b;
printf("enter a,b values\n");
scanf("%d%d",&a,&b);
printf("before calling:%d%d\n",a,b);
swap(&a,&b);
printf("after calling:%d%d",a,b);
}
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
printf("after swapping:%d%d",*x,*y);
}
