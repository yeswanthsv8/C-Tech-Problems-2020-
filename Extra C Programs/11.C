#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,num=1,j;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
   for(j=1;j<=i;j++)
   {
      printf("%d",num);
      if(i!=1 && j!=i)
      {
	 printf("*");
      }
      num++;
   }
   printf("\n");
}

}
