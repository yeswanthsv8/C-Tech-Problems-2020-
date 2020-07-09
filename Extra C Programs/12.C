#include<stdio.h>
#include<conio.h>

void main()
{
char str[20],vw[]={'a','e','i','o','u','A','E','I','O','U'};
int i,j;
char ch='@';
clrscr();

printf("Input:");
gets(str);

for(i=0;i<strlen(str);i++)
{
  for(j=0;j<strlen(vw);j++)
  {
    if(str[i]==vw[j])
    {
       str[i]=ch;
    }
  }
}
printf("Output Is: %s",str);
}