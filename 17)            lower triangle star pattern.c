#include<stdio.h>

int main()
{   int a=11;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(int k=a; k>=1; k--)
        {   printf("*");
        }
        a=a-2;
        printf("\n");
    }
    return 0;
}