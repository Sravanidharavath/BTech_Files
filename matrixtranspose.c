#include<stdio.h>
int main()
{
int r,c,i,j;
printf("enter the rows and columns of the matrix");
scanf("%d%d",&r,&c);
int a[r][c],b[c][r];
printf("enter the matrix elements");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d ",&a[i][j]);
}
}
printf("transpose of matrix\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d ",a[j][i]);
}
printf("\n");
}
}
