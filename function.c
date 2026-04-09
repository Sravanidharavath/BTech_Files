#include<stdio.h>
int getchoice();
void getnumbers(int a[],int n);
int findsmallest(int a[],int n);
int findlargest(int a[],int n);
int findsum(int a[],int n);
float findaverage(int a[],int n);
int main()
{
int choice,n;
printf("enter the array size\n");
scanf("%d",&n);
int number[n];
getnumbers(number,n);
choice=getchoice();
switch(choice)
{
case 1:printf("smallest number is %d\n",findsmallest(number,n));
break;
case 2:printf("largest number is %d\n",findlargest(number,n));
break;
case 3:printf("sum of the number is %d",findsum(number,n));
break;
case 4:printf("average of the number is %f",findaverage(number,n));
break;
default:printf("invalid choice\n");
break;
}
return 0;
}
int getchoice()
{
int choice;
printf("choice an operation:\n");
printf("press1.to find smallest number\n");
printf("press2.to find largest number\n");
printf("press3.to find sum of the number\n");
printf("press4.to find average of the number\n");
printf("enter your choice:");
scanf("%d",&choice);
return choice;
}
void getnumbers(int a[],int n)
{
int i;
printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
int findsmallest(int a[],int n)
{
int i;
int smallest=a[0];
for(i=1;i<n;i++)
{
if(a[i]<smallest)
{
smallest=a[i];
}
}
return smallest;
}
int findlargest(int a[],int n)
{
int i;
int largest=a[0];
for(i=1;i<n;i++)
{
if(a[i]>largest)
{
largest=a[i];
}
}
return largest;
}
int findsum(int a[],int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
return sum;
}
float findaverage(int a[],int n)
{
int sum=findsum(a,n);
return (float)sum/n;
}
































