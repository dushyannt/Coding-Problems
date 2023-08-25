#include<stdio.h>
int main()
{
    int n, m ;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter element of an array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number which you want to compare\n");
    scanf("%d",&m);
    for(int j=0; j<n; j++)
    {
        if(a[j]==m)
        {
            a[j]=a[j]*a[j];


        }
        else
        {   a[j]=a[j]*a[j]*a[j];



        }

    }
    printf("The converted Array is: ");
    for(int k=0; k<n; k++)
    {   printf("\n\t%d\n",a[k]);
    }
    return 0;
}





