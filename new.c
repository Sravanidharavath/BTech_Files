//creation of a list in a linked list
#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node
{
int data;
struct node *next;
};
struct node *header,*newnode,*temp;
header=NULL;
int choice;
int count=0;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(header==NULL)
{
header=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
printf("do you want to continue(0,1)?\n");
scanf("%d",&choice);
}
temp=header;
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
count++;
}
printf("total number of nodes are:%d",count);
}
void insert()
{
temp=header;
while(temp->next!=NULL)
{
temp=temp->next;
}
newnode->next=NULL;
temp->next=new;
}


