#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,step=1,sp;
clrscr();

printf("Input:");
scanf("%d",&n);

sp=n-1;
for(i=1;i<=n+3;i++)
{
  if(i<=n)
  {
     for(j=1;j<=sp;j++)
     {
       printf(" ");
     }
     for(j=1;j<=step;j++)
     {
      printf("*");
     }
     step+=2;
     sp-=1;
     printf("\n");
  }
  else
  {
    for(j=1;j<=3;j++)
    {
      printf("*");
    }
    for(j=1;j<=(2*n-1)/2;j++)
    {
      printf(" ");
    }
    for(j=1;j<=3;j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

}