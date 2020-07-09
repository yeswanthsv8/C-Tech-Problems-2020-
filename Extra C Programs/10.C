#include<stdio.h>
#include<conio.h>

void main()
{
int n,*a,i,count=0,*b,k,flag,max;
clrscr();

printf("Input:");
scanf("%d",&n);

printf("Enter Array %d Elements:",n);
a=(int*)calloc(n,sizeof(int));
b=(int*)calloc(n,sizeof(int));

for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

k=0;
for(i=0;i<n;i++)
{
  if(a[i]<0)
  {
    flag=0;
  }
  else
  {
    flag=1;
    count++;
  }
  if(flag==0 || (i==n-1))
  {
     b[k]=count;
     count=0;
     k++;
  }
}
max=b[0];
for(k=0;k<n;k++)
{
  if(b[k]>max)
  {
    max=b[k];
  }
}
printf("Output:%d",max);
}
