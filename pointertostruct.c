//pointer to structure
#include<stdio.h>
struct student
{
int id;
char name[30];
int marks;
};
int main()
{
struct student s,*p;
p=&s;
printf("enter the details of the students\n");
scanf("%d%s%d",&p->id,p->name,&p->marks);
printf("id=%d\nname=%s\nmarks=%d\n",p->id,p->name,p->marks);
}
