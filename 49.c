#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[20];
    int i,j,len,flag=0,c=0;
    scanf("%s",str);
    
    len=strlen(str);
    
    if(len>1)
    {
        
    for(i=1;i<len-1;i++)
    {
        if(str[i]=='(')
        {
         
            for(j=i+1;j<len-1;j++)
            {
                if(str[j]==')')
                {
                   str[j]='#';
                   c++;
                   break;
                }
            } 
  
        }     
        else if(str[i]=='#')
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
        
    }
    
    else
    {
       printf("-1");   
    }
    return 0;
}
