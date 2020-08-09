#include<stdio.h>
#include<conio.h>

void main()
{
int n,num,i,j,fh=3,nh=1;
clrscr();

scanf("%d",&n);
num=n;
for(i=1;i<=num;i++)
{
   if(i==1 || i==num)
   {
      for(j=1;j<=num;j++)
      {
	 printf("%d ",j);
      }
   }
   else
   {
      for(j=1;j<=fh;j++)
      {
	 printf("  ");
      }
      printf("%d ",--n);
      for(j=1;j<=nh;j++)
      {
	 printf(" ");
      }
      fh--;
      nh++;

   }
   printf("\n");
}

}