//insertion of nodes in a singly linked list 
#include<stdio.h>
#include<stdlib.h>
void insertatbeg();
void insertatend();
void insertatpos();
struct node
{
int data;
struct node *next;
};
struct node *newnode,*temp,*header,*ptr;
void main()
{
int choice,ch;
header=NULL;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data:");
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
printf("do you want to continue(0,1)?:");
scanf("%d",&choice);
}
temp=header;
printf("created nodes are:\n");
while(temp->next!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("%d\n",temp->data);
printf("\n1.insertatbeg\n2.insertatend\n3.insertatpos\n");
while(ch!=3)
{
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:insertatbeg();
break;
case 2:insertatend();
break;
case 3:insertatpos();
break;
default:printf("invalid choice");
}
}
}
void insertatbeg()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data you want to insert:");
scanf("%d",&newnode->data);
newnode->next=header;
header=newnode;
temp=header;
printf("after insertion of data\n");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
void insertatend()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data you want to insert:");
scanf("%d",&newnode->data);
newnode->next=NULL;
temp=header;
printf("after insertion of a node at end:\n");
while(temp->next!=NULL)
{
temp=temp->next;
}
newnode->next=NULL;
temp->next=newnode;
temp=header;
while(temp!=NULL)
{
 printf("%d\n",temp->data);
 temp=temp->next;
}
}
void insertatpos()
{
int pos,i;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the position:");
scanf("%d",&pos);
temp=header;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
printf("enter the data:");
scanf("%d",&newnode->data);
newnode->next=temp->next;
temp->next=newnode;
temp=header;
printf("after inserting a node at given position:\n");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}






