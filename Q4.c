#include<stdio.h>
/*
input:
enter inner radius:4
enter outer radius:3
output:
perimeter:19678022.000000
 area:4267117312.000000
 */
int main()
{

float pi=3.14;
int a,b;

printf("enter inner radius:");
scanf("%d",&a);

printf("enter outer radius:");
scanf("%d,&b");



float perimeter=2*pi*(a+b);
float area=pi*(a*a*b*b);

printf("perimeter:%f\n area:%f\n",perimeter,area);


    return 0;
}//accept inner  & outer radius of the ring & print the perimeter and area of the ring. 