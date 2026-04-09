#include<stdio.h>//(4)program to check character is an alphabet,digit or special character
int main()
{
char ch;
printf("enter any character");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
{
printf("%c is a  alphabet",ch);
}
else if(ch>='0'&&ch<='9')
{
printf("%c is a digit",ch);
}
else
{
printf("%c is a special character",ch);
}
return 0;
}
