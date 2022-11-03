#include<stdio.h>
// swap two variable
int main()
{
  int a,b;
  
  printf("enter the value of a:");
  scanf("%d",&a);//11

  printf("enter the value of b:");
  scanf("%d",&b);//12

   int temp;

   temp=a;//11
   a=b;//12
   b=temp;//11

   printf("the inter changinng value of a is:%d\n",a);
   printf("\nthe inter changinng value of b is:%d",b);

   return 0;

}