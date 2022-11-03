#include<stdio.h>
//write a c program to print n natural no using do while loop//
void main()
{
  int n,i=1;
  printf("enter the value of n:");
  scanf("%d",n);
  do
  {
   printf("%d",i);
   i++;
  } while(i<=n);

}