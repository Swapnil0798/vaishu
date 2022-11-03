#include<stdio.h>
#include<math.h>
/*
input:
enter the velocity:12
enter the acceleration13
enter the time:24

output:
final velocity:324
distance:7500
*/
int main()
{
    int u,a,t;
    int v,s;
    
printf("enter the velocity:");
scanf("%d",&u);

printf("enter the acceleration");
scanf("%d",&a);

printf("enter the time");
scanf("%d",&t);

v=u+a*t;
s=u+a*t*t;

printf("final velocity:%d\n",v);
printf("distance:%d\n",s);


    return 0;
}//accept initial velocity ,acceleration ,time.print the final velocity & the distance travelled.