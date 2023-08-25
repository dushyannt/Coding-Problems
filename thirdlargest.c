#include<stdio.h>

int main()
{
    int a[50],k,n,x,i,j,e[50],o[50],oddlim,evenlim ;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    a[n];
    printf("Enter the elements of an array\n");

    for(i=0; i<n; i++)
    {   scanf("%d",&a[i]);
    }
    printf("The array:\n");
    for(i=0; i<n; i++)
    {   printf(" %d\n",a[i]);
    }
    for(i=0;i<n-1;i++)
    {  for(j=0;j<n-1-i;j++)
         if(a[j]>a[j+1])
       {    x=a[j];
           a[j]=a[j+1];
           a[j+1]=x;
       }
   
    } printf("The sorted array: ");
     for(i=0;i<n;i++)
      {   printf("%d\n",a[i]);
           }
      printf("the third largest element: %d",a[2]);
    return 0;
}