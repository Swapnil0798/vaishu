#include<stdio.h>
void main()
{
 int h,m,s;
  
 printf("enter the time:");
 scanf("%d %d %d",&h,&m,&s);

 if ((h>=0&&h<24)&&(m>=0&&m<60)&&(s>=0&&s<60))
  {
    printf("it time is valid:");          
  }
   else
  {
      printf("it time is invalid:");
  } 

}