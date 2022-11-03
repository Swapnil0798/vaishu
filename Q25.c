#include<stdio.h>
/*
4       4       4       4
3       3       3
2       2
1
*/
int main()
{
  int ino=4;
  for(int i=ino;i>=1;i--)// row
  {
    for(int j=1;j<=i;j++)// col
    {
      printf("%d\t",i);    
      }
      printf("\n");
  }
  
  return 0;
}