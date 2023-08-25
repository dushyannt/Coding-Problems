#include<stdio.h>

int main()
{   int n,ssum,dsum, i, j;
    printf("enter the size of an array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
     {
       if(a[i]%10>0)
    {
       ssum=a[i]+ssum;
        printf("%d",ssum);
    
     }
    
    else{ dsum=dsum+a[i];
    
      printf("%d",dsum);
    }
     return 0;
    }