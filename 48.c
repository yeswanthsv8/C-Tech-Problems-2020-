#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int flag=0,n,a[99],i,j,count=0;
    scanf("%d",&n);
    
    if(n>2 && n<10)
    {
        
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(i==0 && count==n-1)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else
    {
    printf("%d",count);    
    }
        
    }
    
    else
    {
        printf("0");
    }
    return 0;
}
