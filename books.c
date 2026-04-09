#include<stdio.h>//program to print book name and number of books
int main()
{
int b1,b2,i,j;
printf("enter the book name:");
scanf("%d%d",&b1,&b2);
int a[b1][b2];
printf("enter the number of books:");
for(i=0;i<b1;i++)
{
for(j=0;j<b2;j++)
{
scanf("%d ",&a[i][j]);
}
}
for(i=0;i<b1;i++)
{
for(j=0;j<b2;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
}
