#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
char c;
char vw[]={'a','e','i','o','u','A','E','I','O','U','\0'};
int i=0,flag=0;
clrscr();

c=getch();

if(isalpha(c))
{
  for(i=0;i<strlen(vw);i++)
  {
      if(c==vw[i])
      {
	 flag=1;
	 printf("%c is a vowel",c);
	 break;
      }
  }
  if(flag==0)
  {
    printf("%c is a consonant",c);
  }
}

else
{
  printf("%c is not an alphabet",c);
}

}
