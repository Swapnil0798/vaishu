#include<stdio.h>
/*
input:
enter the math mark:
91
enter the eng mark:
58
enter the phy mark:
64
enter the chem mark:
67
enter the bio mark:
80
enter the agri mark:
99
output:
the percentage vaishanvi is:76.500000
*/
int main()

{
int math,eng,phy,chem,bio,agri;
int total=600;
float per;
double total1;

printf("enter the math mark:\n");
scanf("%d",&math);

printf("enter the eng mark:\n");
scanf("%d",&eng);

printf("enter the phy mark:\n");
scanf("%d",&phy);

printf("enter the chem mark:\n");
scanf("%d",&chem);

printf("enter the bio mark:\n");
scanf("%d",&bio);

printf("enter the agri mark:\n");
scanf("%d",&agri);

total1=math+eng+phy+chem+bio+agri;
per=total1/total*100;
printf("the percentage vaishanvi is:%f",per);



return 0;

}

