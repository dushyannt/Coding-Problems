#include<stdio.h>

int main()
{
    int n,i,j,a[100],sum=0,count=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of an array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
               
                 
                   
                
                if(a[i]+a[j]+a[k]==9 )
                {
                    {
                       
                    
                    printf("%d + %d + %d=9\n",a[i],a[j],a[k]);
                    count++;}
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}