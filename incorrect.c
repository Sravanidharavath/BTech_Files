#include<stdio.h>
int main()
{
int a;
double rt;
printf("enter any number to get the square root\n");
scanf("%d",&a);
rt=sqrt(a);
printf("\n the square root of %d is:%.2lf",a,rt);
return 0;
}
