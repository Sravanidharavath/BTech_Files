#include<stdio.h>//program to print the matrix multiplication
int main()
{
int r1,c1,r2,c2,i,j,k;
printf("enter the rows and columns of A matrix");
scanf("%d%d",&r1,&c1);
printf("enter the rows and columns of B matrix");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c2];
if(c1==r2)
{
printf("enter the elements of A matrix");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of B matrix");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<c1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
//c[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
}
else
{
printf("matrix multiplication is not possible");
}
}
