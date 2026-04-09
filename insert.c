#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
}*header,*new;
int main()
{
int item;
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&item);
new->data=item;
if(header==NULL)
{
new->link=NULL;
header=new;
}
else
{
new->link=header;
header=new;
}
}
