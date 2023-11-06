#include<stdio.h>
#include<conio.h>

void main()
{
const int pi=3.14;
int radius;
float ans;
clrscr();
printf("enter value of radius: ");
scanf("%d",&radius);

ans=pi*radius*radius;
printf("ans is : %f ",ans);


getch();
}