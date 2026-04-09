//program to print the index value of entered character in a string
#include<stdio.h>
#include<string.h>
int main()
{
char ch,str[100];
int i,flag=0;
printf("enter the string\n");
gets(str);
printf("enter the character\n");
scanf("%c",&ch);
int l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]==ch)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("index of character %c is %d\n",ch,i);
}
else
{
printf("not found so, default value=%d\n",-1);
}
}

/*output
enter the string
sravani
enter the character
v
index of character v is 3
*/
