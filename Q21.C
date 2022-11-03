#include<stdio.h>
int main()
{
   float basic;
   float incometax;

   printf("enter the annual basic salary of an employee:");
   scanf("%lf",&basic);

   if(basic<1,50,000)
   {
      printf("tax become zero:");
   }

   if(basic>=1,50,000 || basic<=300000)
   {
      printf("tax become 20 percent:");
   }
   else if(basic>300000) 
   {
     printf("tax become 30 percent"); 
   }
      return 0;      
}