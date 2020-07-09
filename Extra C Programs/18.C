#include<stdio.h>
#include<conio.h>

void main()
{
char str[100],vw[]={'a','e','i','o','u','A','E','I','O','U'};
int i,j=0,sp=0,vow=0,con=0,flag;
clrscr();

printf("Input:");
gets(str);

for(i=0;i<strlen(str);i++)
{
   if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
   {
      flag=0;
      for(j=0;j<strlen(vw);j++)
      {
	 if(str[i]==vw[j])
	 {
	    flag=1;
	    vow+=1;
	 }
      }
      if(flag==0)
      {
	   con+=1;
      }
   }
   else
   {
     sp++;
   }
}
printf("\nConsonants: %d\n",con);
printf("Vowels: %d\n",vow);
printf("Special Characters: %d\n",sp);
}