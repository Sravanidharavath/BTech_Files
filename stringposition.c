//program to print the position/index value for a entered character
#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[20];
char *found;
printf("enter the first string:\n");
gets(s1);
printf("enter the character to be searched:\n");
gets(s2);
found=strstr(s1,s2);
if(found)
{
printf("string is found at %d position:\n",found-s1);
}
else
{
printf("-1");
}
}
