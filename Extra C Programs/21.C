#include<stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);

int main(void)
{
int a,b;

printf("Enter two Numbers:");
scanf("%d %d",&a,&b);

printf("%d + %d= %d\n",a,b,add(a,b));
printf("%d - %d= %d\n",a,b,sub(a,b));
printf("%d * %d= %d\n",a,b,mul(a,b));
printf("%d / %d= %f\n",a,b,div(a,b));
return 0;
}

int add(int x,int y)
{
  int result;
  result=x+y;
  return result;
}
int sub(int x,int y)
{
  int result;
  result=x-y;
  return result;
}
int mul(int x,int y)
{
  int result;
  result=x*y;
  return result;
}
float div(int x,int y)
{
  float result;
  result=x/y;
  return result;
}
