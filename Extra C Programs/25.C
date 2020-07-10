#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[20];
int i,len,j;
clrscr();

printf("String:");
gets(str);

len=strlen(str);
for(i=0;i<strlen(str);i++)
{
   for(j=0;j<len;j++)
   {
      printf("%c",str[j]);
   }
   len-=1;
   printf("\n");
}

}
