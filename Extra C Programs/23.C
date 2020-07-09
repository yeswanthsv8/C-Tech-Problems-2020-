#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,k,n,sp=4,prt=1,num;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
   num=1;
   for(j=0;j<sp;j++)
   {
      printf("  ");
   }
   for(k=0;k<prt;k++)
   {
      printf("%d",num);
      if(k!=prt-1)
      {
	printf(" ");
      }
      num++;
   }
   if(i<4)
   {
     sp--;
     prt+=2;
   }
   else
   {
     sp++;
     prt-=2;
   }
   printf("\n");
}

}
