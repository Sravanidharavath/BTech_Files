#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,CI;
printf("enter p(amount):");
scanf("%f",&p);
printf("enter t:");
scanf("%f",&t);
printf("enter r:");
scanf("%f",&r);
CI=p*pow((1+r/100),t);
printf("compound interest=%f",CI);
return 0;
}
