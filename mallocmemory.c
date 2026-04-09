#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,*p,sum=0;
printf("enter the number\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
if(p==NULL)
{
printf("sorry!unable to allocate memory");
exit(0);
}
else
{
printf("eneter elements of array");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
sum=sum+*(p+i);
}
}
printf("sum=%d",sum);
free(p);
return 0;
}
