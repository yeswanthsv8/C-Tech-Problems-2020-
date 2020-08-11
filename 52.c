#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,n1,num,size=0,j=0,*c;
    int count=0,k=0;
    int bal,cur,sum=0,flag=0,flag1=0;
    
    scanf("%d",&n);
    n1=n;

    int a[n],b[n1];
    
    c=(int*)calloc(sizeof(int),n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    
    j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<num)
        {
            b[j++]=a[i];
        }
        else if(a[i]==num)
        {
            count=1;
            c[k++]=count;
            size++;
            n1--;   
        }
    }
    
 
    for(i=0;i<n1;i++)
    {
        cur=b[i];
        sum=cur;
        bal=num-cur;
        
        if(bal>=1)
        {
            
         count=1;

         label:  
         flag=0;
         for(j=0;j<n1;j++)
         {
            if(bal==b[j] && i!=j)
            {
                if(sum+b[j]<=num)
                {
                flag=1;
                count++;
                }
                break;
            }
         }
         if(flag==1)
         {
            sum=sum+b[j];
         }
         if(sum==num)
         {
            c[k++]=count;
            size++;
         }
         else  
         {
              bal--;
              if(bal>=1)
              {
                  goto label;
              }
            
         }
       }      
                  
      }  
    
    for(i=0;i<size;i++)
    {
          if(c[i]==0)
          {
              flag1=1;
          }
    }
    
    if(flag1!=1 && size!=0)
    {
    
    count=c[0];
    for(i=0;i<size;i++)
    {
        if(c[i]>count)
        {
          count=c[i];
        }
    
    }
    printf("%d",count);
    
    }
    
    else
    {
        printf("-1");
    }
    
    return 0;
}
