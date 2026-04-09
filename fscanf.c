#includde<stdio.h>
inr main()
{
FILE *p=fopen("fscanf.txt","r");
if(p==NULL)
{
printf("no such file");
return 0;
}
char s[100];
while(fscanf(p,"%s",s)!=EOF)
printf("%s",s);
return 0;
}
