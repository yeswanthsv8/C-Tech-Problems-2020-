#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}

void main()
{
int a,b;
clrscr();

printf("Enter Number1: Number2:");
scanf("%d %d",&a,&b);
printf("\nBefore Swapping Num1: %d & Num2: %d",a,b);
swap(&a,&b);
printf("\nAfter  Swapping Num1: %d & Num2: %d",a,b);
}
