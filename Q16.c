#include<stdio.h>
/* accept character as a input check weather the character is a digit 
(check if it is in the range 0 to 9 both inclusive)
input:enter the character:12
 output: 1 is a digit
 input:enter the character:a
 output: a is not a digit
 */
int main()
{
 char ch;
 
 printf("enter the character:");
 scanf("%c",&ch);
 if(ch>='0' && ch<='9')
 {
   printf("\n %c is a digit",ch);
 }
 else
 {
   printf("\n %c is a not digit",ch);
 }
 return 0;
}