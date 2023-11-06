#include<stdio.h>
#include<conio.h>

void main()
{
const int a=5;
int b;
clrscr();

printf("value of a is 5\n");

printf("enter value of b: ");
scanf("%d",&b);

printf("sum of %d and %d is : %d",a,b,a*b);

getch();
}