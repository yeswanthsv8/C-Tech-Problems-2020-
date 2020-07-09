#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int i,n,r=2,c,j,k,*a1,*a2;
clrscr();

printf("Input:");
scanf("%d",&n);

if(n%2==0)
{
  c=n/2;
}
else
{
  printf("Cannot Create 2D Arrays.");
}

a1=(int*)malloc(sizeof(int)*n);
a2=(int*)malloc(sizeof(int)*r*c);

printf("Enter Array Elements:");
for(i=0;i<n;i++)
{
  scanf("%d",&a1[i]);
}
printf("Array1:{");
for(i=0;i<n;i++)
{
  printf("%d",a1[i]);
  if(i<n-1)
  {
    printf(",");
  }
}
printf("}");
printf("\n\n");

k=0;
printf("Array2(DD):\n");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
    *((a2+i)+j)=a1[k++];
    printf("%d ",*((a2+i)+j));
  }
  printf("\n");
}

}
