#include<stdio.h>//program to print 2dimensionalarray list
int main()
{
int r,c,i,j;
printf("enter the rows and column size\n");
scanf("%d%d",&r,&c);
int a[r][c];
printf("enter the elements\n");
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
printf("%d ",a[i][j]);
}
printf("\n");
}
}
