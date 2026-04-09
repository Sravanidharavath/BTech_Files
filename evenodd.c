#include<stdio.h>
int main()
{
int i,even,odd,n;
printf("enter the size of array\n");
scanf("%d",&n);
int num[n];
even=0;
odd=0;
printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&num);
}
for(i=0;i<n;i++);
{
if((n(i)%2)==0)
{
even+=num[i];
}
else
{
odd+=num[i];
}
}
printf("sum of even number=%d",even);
printf("sum of odd number=%d",odd);
}
