#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int *a,i,j,r,c,k=0;
clrscr();

printf("Rows: & Columns:");
scanf("%d %d",&r,&c);

a=(int*)malloc(sizeof(int)*r*c);

printf("Enter 2d Array Elements:");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
     scanf("%d",(a+i*c+j));
  }

}

printf("2d Array Is:\n");

for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
     printf("%d ",*(a+i*c+j));
     a[k++]=*(a+i*c+j);
  }
  printf("\n");
}
printf("Now 1D-Array Is:");
for(i=0;i<r*c;i++)
{
  printf("%d ",a[i]);
}
}