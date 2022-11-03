#include<stdio.h>
int main()
{
    int num1,num2,product,add,sub,div;

    printf("enter the two numbers:");
    scanf("%d %d",&num1,&num2);

    product=num1*num2;
    add=num1+num2;
    sub=num1-num2;
    div=num1/num2;

    printf("multiplication two number:%d\n",product);
    printf(" addition of two number:%d\n",add);
    printf(" substraction of two number:%d\n",sub);
    printf("division of two number:%d\n",div);

    return 0;
}
    

