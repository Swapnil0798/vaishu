#include<stdio.h>
//write a c program to print sum of digit//
/*
input:
Accept the no:123
output:
6
*/
int main()
{
    int n,rem=0,sum=0;
    printf("Accept the no:");
    scanf("%d",&n);
    while (n>0)
    {
      rem=n%10;
      sum=sum+rem;
      n=n/10;        
    }        
     printf("%d",sum); 
}