#include<stdio.h>
int main()
{
  int ino;
  printf("enter the number:");
  scanf("%d",&ino);
  
  if(ino%5==0 && ino%7==0)
  {
    printf("it is divisible by 5 and 7");
  }
  else
  {
     printf("it is not divisible by 5 and 7");
  }
  return 0;
}