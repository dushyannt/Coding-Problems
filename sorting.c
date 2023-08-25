#include<stdio.h>

int main()
{
    int a[50],n,x,i,j;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    a[n];
    printf("enter the elements of an array\n");
    for(i=0; i<n; i++)
    {   scanf("%d",&a[i]);
    }
    printf("The unsorted array:\n");
    for(i=0; i<n; i++)
        printf("%d\t",a[i]);

    for(i=0; i<n-1; i++)
    {   for(j=0; j<n-1-i; j++)
            if(a[j]>a[j+1])
            {   x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;

            }
    }

  printf("\nThe sorted array:");
    for(i=0; i<n; i++)
    {
        
    

    printf("\n%d\n ",a[i]);

}







    return 0;
}