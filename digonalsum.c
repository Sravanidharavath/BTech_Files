#include<stdio.h>//program to print the sum of digonal elements
int main()
{
int n,i,j,sum=0,r,c;
printf("enter the rows and columns of the matrix\n");
scanf("%d%d",&r,&c);
int a[r][c];
//printf("enter the matrix elements\n");
//if(r==c)
//{
if(r==c)
printf("coefficient of the matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the given matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
sum+=a[i][i];
//n+=a[i][r-i-1];
}
printf("the sum of the diagonal elements is=%d",sum);
//printf("the sum of the off digonal elements is=%d",n);
}
