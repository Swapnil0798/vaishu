#include<stdio.h>
int main()
{
    int irow=4,icol=4;
           // 1    2     4
    for(int i=1;i<=irow;i++)//rows
    {   
           //3
        for(int j=1;j<=icol;j++)//columns
        {
            printf("  *  ");
        }
        printf("\n");
    }
    return 0;
}