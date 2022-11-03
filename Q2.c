#include<stdio.h>
#include<math.h>
/*
input:
enter the temprature:0
output:
celcius:32.000000
kelvin:305.150000
*/
int main()
{
    double c,f,k;
    printf("enter the temprature:");
    scanf("%d",&f);

    c=(9/5*f)+32;
    k=c+273.15;

    printf("celcius:%lf\n",c);
    printf("kelvin:%lf\n",k);


    return 0;
}