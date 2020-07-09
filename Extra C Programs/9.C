#include<stdio.h>
#include<conio.h>

void main()
{
int n,*a,temp,i;
clrscr();

printf("Enter Size:");
scanf("%d",&n);

printf("Enter Array Elements:");

a=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("Array Elements Are: ");
for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}
temp=a[0];

for(i=0;i<n-1;i++)
{
  a[i]=a[i+1];
}
a[n-1]=temp;

printf("\nLeft Rotation Is:");
for(i=0;i<n;i++)
{
   printf("%d ",a[i]);
}

}
