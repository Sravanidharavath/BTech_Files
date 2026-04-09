#include<stdio.h>
int main()
{
int n,f,l;
printf("enter any number");
scanf("%d",&n);
l=n%10;
while(n>0)
{
f=n%10;
n=n/10;
}
printf("firstdigit=%d and lastdigit=%d",f,l);
return 0;
}
