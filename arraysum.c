#include<stdio.h>

int main()
{   int a[20],n,ssum=0,dsum=0,i,j, single=0,doubl=0;
    printf("enter the size of an array");
    scanf("%d",&n);
   
      for( j=0;j<n;j++)
    {
      scanf("%d",&a[j]);
    }
    
    for(i=0;i<n;i++)
     {
       if((a[i]>-10) && (a[i]<10))
    {
       ssum=a[i]+ssum;
        single++;
    
     }
    
    else{ 
    dsum=dsum+a[i];  
    doubl++;
    }
    }
    printf("sum of single digit= %d\n",ssum);
    printf("sum of double digit= %d\n",dsum);
    printf("number of single digit element %d\n",single);
    printf("number of double digit element %d\n",doubl);
    return 0;
    }