/*#include<stdio.h>
int main()
{
char str[10];
printf("enter the string");
scanf("%s",str);
printf("%s",str);
}*/

/*#include<stdio.h>
int main()
{
int n;
printf("enter the size\n");
scanf("%d",&n);
char str[n];
printf("enter a string\n");
scanf("%s",str);
printf("%s",str);
}
*/

/*#include<stdio.h>
int main()
{
int n;
printf("enter the size\n");
scanf("%d",&n);
char str[10]="sravani";
printf("enter a string\n");
scanf("%[^(0-9)]",str);
printf("%s",str);
}*/

//program to print two strings with gets and fgets
/*#include<stdio.h>
int main()
{
char s1[100],s2[100];
printf("enter two string\n");
gets(s1);
fgets(s2,size of(s2),stdin);
printf("string2:%s",s2);
printf("string1:%s",s1);
}*/

//program to print two strings with puts and fputs
/*#include<stdio.h>
int main()
{
char s1[100],s2[100];
printf("enter two strings\n");
puts(s1);
fputs(s2,s2[100],stdout);
printf("string2:%s",s2);
printf("string1:%s",s1);
}*/

//program to print length of string
/*#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
printf("enter the string\n");
fgets(str,100,stdin);
int l=strlen(str);
printf("length=%d",strlen(str));
}*/

//program to print reverse of strings
/*#include<stdio.h>
#include<stdio.h>
int main()
{
char str[100];
printf("enter the string\n");
fgets(str,100,stdin);
printf("reverse=%s",strrev(str));
}*/

//program to print lowercase to uppercase
/*#include<stdio.h>
#include<string.h>
int main()
{
char str="sravani";
strupr(str);
printf("the uppercase of the string is:%s",str);
}*/

