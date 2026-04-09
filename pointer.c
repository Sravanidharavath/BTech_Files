#include<stdio.h>
int main()
{
int a=10,b=20;
int *p;
int *q;
p=&a;
q=&b;
printf("value of a %d\n",*p);
printf("address of a %u\n",p);
printf("value of b %x\n",b);
printf("address of b %x\n",&b);
printf("a=%d",&a);
}
