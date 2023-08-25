#include<stdio.h>

int main()
{   int a[50],k,n,x,i,j,e[50],o[50],oddlim,evenlim ;
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
    for(i=0; i<n; i++)
    {   if(a[i]%2==0)
        {   e[j]=a[i];
            j++;

        }
        else
        {   o[k]=a[i];
            k++;
        }
    }
    
    
    printf("The even array: \n") ;
    for(i=0; i<j; i++)
    {   printf("%d\n",e[i]);
    }
    printf("\nThe odd array: \n") ;
    for(i=0; i<k; i++)
    {
        printf("\n%d\n",o[i]);

    }

    return 0;
}