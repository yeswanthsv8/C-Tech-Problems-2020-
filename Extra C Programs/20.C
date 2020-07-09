#include<stdio.h>
#include<conio.h>

int fact(int);

void main()
{
int num,ans;
clrscr();

printf("Input:");
scanf("%d",&num);

ans=fact(num);
printf("Factorial Of %d Is:%d",num,ans);
}

int fact(int x)
{
   if(x==0 || x==1)
   {
      return 1;
   }
   else if(x<0)
   {
      printf("Cannot Compute Factorial For Negative Number.");
      return -1;
   }
   else
   {
      return x*fact(x-1);
   }
}