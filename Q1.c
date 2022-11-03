#include<stdio.h>
#include<math.h>
/*
input:
enter the radius:
3
enter the height:
4
output:
the area of surface is:131.880005
the volume of surface is:113.040001
*/
int main()
{
    

    float Pi=3.14,area,volume;
    int r,h;

    printf("enter the radius:\n");
    scanf("%d",&r);

    printf("enter the height:\n");
    scanf("%d",&h);

    area=(2*Pi*r*r)+(2*Pi*r*h);
    volume=Pi*r*r*h;

    printf("the area of surface is:%f\n",area);
    printf("the volume of surface is:%f\n",volume);

    return 0;
}
//accept dimension of cylinder and print the surface area and
