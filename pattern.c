#include<stdio.h>

int main()
{
    int a=1, b=1;
    for(int i=1; i<=4; i++)
    {   for(int j=4; j>=i; j--)
        {   printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("%d ",b);
            b++;
        }
        
        printf("\n");
    }
    return 0;
}