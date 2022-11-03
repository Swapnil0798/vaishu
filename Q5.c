#include<stdio.h>
#include<math.h>
int main()
{
int a,b;
int AM,HM;
printf("enter the a:");
scanf("%d",&a);

printf("enter the b:");
scanf("%d",&b);

AM=(a+b)/2;
HM=(a*b)/(a+b);

printf("arithmatic:%d\n",AM);
printf("harmonic:%d\n",HM);

    return 0;
}