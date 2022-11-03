#include<stdio.h>
int main()
{ 
   int irow=4;
   int icol=4;
   
   for ( int i=1;i<=irow;i++)//row
     {
    for(int j=1;j<=icol;j++)//column
      {
         if(i+j>4)
         {
         printf("1\t");
         }
         else{
            printf("\t");
         }
      }  
     printf("\n");
   }
return 0; 
}       