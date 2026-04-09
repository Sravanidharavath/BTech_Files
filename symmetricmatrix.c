#include<stdio.h>//program to print the matrix is symmetric or not?
int main()
{
int n,r,c,i,j,t,count=1,a[10][10],b[10][10];
printf("enter the rows and columns of the matrix\n");
scanf("%d%d",&r,&c);
printf("enter the matrix elements\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
b[i][j]=a[i][j];
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=b[i][j])
{
count++;
break;
}
}
}
if(count==1)
{
printf("the matrix is symmetric\n");
}
else
{
printf("the matrix is not symmetric\n");
}
}

