#include<stdio.h>
#include<math.h>
int main()
{

int  l,b,h;
int s,v;


printf("enter the length:");
scanf("%d",&l);

printf("enter the breath:");
scanf("%d",&b);

printf("enter the height:");
scanf("%d",&h);

s=2*(l*b+l*h+b+h);
v=l*b*h;

printf("surface area:%d\n",s);
printf("volume=%d\n",v);


    return 0;
}