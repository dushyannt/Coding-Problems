#include<stdio.h>
//void duplicate(int[],int);
int main()
{
    int a[100],n,i,j,k;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    a[n];
    printf("Enter the element of an array\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
   // duplicate(a,n);
       for(i=0;i<n;i++)
        {  
           for(j=(i+1);j<n;j++)
           {
              if(a[i]==a[j])
              {  for(k=j;k<n;k++) 
                {   a[k]=a[k+1];
            }
                    n--;
                  j--;
            
                 
                
               
       
               
            }
        
           }
      
        
        }
        
        
    printf(" The distinct array: \n");
    for(i=0;i<n;i++) 
   {
       printf("%d\n",a[i]);
   } 
      
    return 0;
}
  /*void duplicate(int a[],int n )
    {   int x,i,j;
        for(i=0;i<n;i++)
        {  
           for(j=(i+1);j<n;j++)
           {
              if(a[i]==a[j])
              {  for(int k=j;k=n;k++) 
                {   a[k]=a[k+1];
            
                    n--;
            
                 }
                
               
       
               
            }
        
           }
      
        
        }} */
        
        
        
        
        
            