#include<stdio.h>//(2)to print first and last digits of a number
int main()
{
int n,f,l;
printf("enter any number\n");
scanf("%d",&n);
l=n%10;
while(n>0)
{
f=n%10;
n=n/10;
}
printf("fistdigit=%d and lastdigit=%d",f,l);
return 0;
}
