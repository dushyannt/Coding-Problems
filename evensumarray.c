#include<stdio.h>

int main()
{   int n,sum, i, j;
    printf("enter the size of an array");
    scanf("%d",&n);
    int a[n];
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     for( j=2;j<n;j=j+2)
     { sum=sum+a[j];
    
    
    }
    printf("%d",sum);

    return 0;
}

