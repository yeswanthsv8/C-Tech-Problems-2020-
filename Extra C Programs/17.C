#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,num=1,k=1;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
   for(j=1;j<=i;j++)
   {
      if(i%2!=0)
      {
	printf("%d",num);
	num++;
      }
      else
      {
	printf("%d",num);
	num--;
      }
      printf(" ");
   }
   printf("\n");
   num=num+k;
   if(i%2!=0)
   {
      k=k+2;
   }
}

}
