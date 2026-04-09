#include<stdio.h>
#include<stdlib.h>
void delete();
struct node
{
int data;
struct node *next;
struct node *prev;
}*header,*newnode,*temp,*ptr,*ptr1;
void main()
{
int choice;
header=NULL;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;
newnode->prev=NULL;
if(header==NULL)
{
header=temp=newnode;
}
else
{
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
}
printf("do you want to continue(0,1):");
scanf("%d",&choice);
}
temp=header;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
delete();
}
void delete()
{
int pos,i;
printf("enter the position");
scanf("%d",&pos);
temp=header;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
ptr1=header;
ptr=temp->next;
ptr1->next=ptr;
ptr->prev=ptr1;
free(temp);
temp=header;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}




















