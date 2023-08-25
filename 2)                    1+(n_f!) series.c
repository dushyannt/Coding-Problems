#include<stdio.h>

int main()
{
    float n,fact=1,sum=0,i,j;
    printf("enter the number");
    scanf("%f",&n);
    for(i=1; i<=n; i=i+2)
    {
        for(j=1; j<=i; j++)
        {
            fact=(fact*j) ;
        }


        sum=(sum+(1/fact));
        fact=1;
    }

    printf("%f",sum);

    return 0;
}