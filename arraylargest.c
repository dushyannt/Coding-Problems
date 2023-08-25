#include<stdio.h>

int main()
{   int n,max, i, j;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    for(j=1; j<n; j++)
    {
        if(max<a[j])
        {   max = a[j];

        }
    }

    printf("\t%d",max);

    return 0;


}