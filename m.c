#include<stdio.h>
int main()
{
int n,l,i;
printf("enter any number");
scanf("%d",&n);
l=n%10;
for(i=1;i<n;i++)
{
n=n/10;
}
printf("lastdigit=%d",n,l,i);
}
