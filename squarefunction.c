//write a program to find the area of a square using functions
#include<stdio.h>
void side(int);
int main()
{
int n;
printf("enter n value\n");
scanf("%d",&n);
side(n);
}
void side(int n)
{
int s=n*n;
printf("side=%d",s);
}
