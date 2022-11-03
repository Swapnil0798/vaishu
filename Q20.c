#include<stdio.h>
int main()
{
    int cp,sp;
    int profit,loss;
    
    printf("enter the cost price and selling price:");
    scanf("%d%d",&cp,&sp);

    profit=sp-cp;
    loss=cp-sp;

    printf("profit  is:%d",profit);
    printf("\nloss  is:%d",loss);

    return 0;
}