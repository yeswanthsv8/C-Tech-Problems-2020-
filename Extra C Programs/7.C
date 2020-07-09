#include<stdio.h>
#include<conio.h>

void main()
{
int rem,num,sum=0;
clrscr();

printf("Enter Two Digit Number:");
scanf("%d",&num);

rem=num%10;
sum=sum+rem;
num/=10;

if(num>0)
{
rem=num%10;
sum=sum+rem;
}

printf("The Sum Of Two Digit Is:%d",sum);
}
