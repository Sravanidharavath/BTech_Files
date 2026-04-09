#include<stdio.h>//program to print the details of student(out of the structure)
struct student
{
int id;
char name[10];
int marks;
}s;
int main()
{
printf("enter the student details\n");
scanf("%d%s%d",&s.id,s.name,&s.marks);
printf("id=%d\nname=%s\nmarks=%d\n",s.id,s.name,s.marks);
}

struct student//(within the structure)
{
int id;
char name[20];
int marks;
};
int main()
{
struct student s;
printf("enter the student details\n");
scanf("%d%s%d",&s.id,s.name,&s.marks);
printf("id=%d\nname=%s\nmarks=%d\n",s.id,s.name,s.marks);
}

//program to print n students details(array with structures)
struct student
{
int id;
char name[10];
int marks;
};
int main()
{
struct student s[3];
int i;
for(i=0;i<3;i++)
{
printf("enter the details of student-%d\n",i+1);
scanf("%d%s%d",&s[i].id,s[i].name,&s[i].marks);
}
for(i=0;i<3;i++)
{
printf("student-%d\n",i+1);
printf("id=%d\nname=%s\nmarks=%d\n",s[i].id,s[i].name,s[i].marks);
}
}



