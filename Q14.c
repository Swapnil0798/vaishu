#include<stdio.h>
int main()
{
  int a;
  printf("Enter the number:");
  scanf("%d",&a);
  if(a%2==0)
  {
    printf("the number is even number:");
  }
  else if(a%2==1)
  {
    printf("the number is odd no:");
  }
  return 0;
}