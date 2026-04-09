//program to count no.of characters,words,lines from a given string
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
char p;
int words=1,lines=1,chars=0,i;
printf("enter the string\n");
scanf("%[^-]",str);
p='\0';
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
{
if(p!=' '&&p!='\t'&&p!='\n'&&p!='\0')
{
words++;
}
}
p=str[i];
if(str[i]=='\n')
{
lines++;
}
else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
{
chars++;
}
}
printf("total number of words=%d\n",words);
printf("total number of lines=%d\n",lines);
printf("total number of chars=%d\n",chars);
}

