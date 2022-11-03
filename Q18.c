#include<stdio.h>
int main()
{
  char ch;

  printf("enter the character:");
  scanf("%c",&ch);

  if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='0')||(ch=='u'))
  {
    printf("enter character is vowel:%c\n",ch);          
  }
 else
  {
    printf("enter the character is consonant:%c\n",ch);          
  }

  return 0;
}