#include<stdio.h>


int main()
{   int a=1,a1=9;
    for(int i=1; i<=5; i++)
    {
        for(int j=5; j>=i; j--)
        {
            printf(" ");
        }
        for(int k=1; k<=a; k++)
        {   printf("*");
        }
        a=a+2;
        printf("\n");
    }
   


    for(int l=1; l<=5; l++)
    {
        for(int m=1;m<=l;m++)
        {
            printf(" ");
        }
        for(int n=a1; n>=1; n--)
        {   printf("*");
        }
        a1=a1-2;
        printf("\n");
    }
    return 0;
}