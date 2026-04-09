#include<stdio.h>
int main()
{
int a=10,b=20;
int *p;
int *q;
p=&a;
q=&b;
printf("before swapping\n%d\n%d\n",*p,*q);//10,20
*p=*p+*q;//*p=30
*q=*p-*q;//*q=30-20(*q=10)
*p=*p-*q;//*p=30-10(*p=20)
printf("after swapping\n%d\n%d\n",*p,*q);//20,10
}
