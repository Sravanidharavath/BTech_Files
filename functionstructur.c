//function with structur
#include<stdio.h>
struct student
{
char name[30];
int marks;
};
void display(struct student);
int main()
{
struct student s;
printf("enter the student details\n");
scanf("%s%d",s.name,&s.marks);
display(s);
}
void display(struct student s1)
{
printf("name is %s\nmarks is %d",s1.name,s1.marks);
}
