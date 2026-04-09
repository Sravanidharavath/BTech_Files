#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,*p,sum=0;
printf("enter n value\n");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
if(p==NULL)
{
printf("error!memory is not allocated");
exit (0);
}
else
{
printf("enter elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
sum=sum+*(p+i);
}
for(i=0;i<n;i++)
{
printf("%u\n",p+i);//to printf the address of the given array
}
int n2;
printf("enter n2 value:");
scanf("%d",&n);
p=(int*)realloc(p,sizeof(int));
for(i=n2;i<n+n2;i++)
{
scanf("%d",p+i);
sum=sum+*(p+i);
}
for(i=n2;i<n+n2;i++)
printf("%u\n",p+i);
printf("sum=%d",sum);
}
return 0;
}


