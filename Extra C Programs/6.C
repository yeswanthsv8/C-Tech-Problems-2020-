#include<stdio.h>
#include<conio.h>

void main()
{
int num,sum=0,rem;
clrscr();

printf("Enter Two Digit Number:");
scanf("%d",&num);

rem=num%10;
sum=sum*10+rem;
num/=10;

if(num>0)
{
  rem=num%10;
  sum=sum*10+rem;
}
printf("Reverse Is:%d",sum);
}