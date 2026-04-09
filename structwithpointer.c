//program to print n strdents details using pointers to structurs
#include<stdio.h>
struct student
{
int id;
char name[30];
float marks;
};
int main()
{
int i;
struct student s[2],*p;
p=&s[0];
printf("enter the student details\n");
for(i=0;i<2;i++)
{
scanf("%d%s%f",&(p+i)->id,(p+i)->name,&(p+i)->marks);
}
for(i=0;i<2;i++)
{
printf("id=%d\nname=%s\nmarks=%f\n",(p+i)->id,(p+i)->name,(p+i)->marks);
}
}
