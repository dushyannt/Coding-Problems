#include<stdio.h>

int main()
{   int n,i,p=0;
    printf("enter the number");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("not prime");
    } else {
        for(i=2;i<=n/2;i++)
 { if(n%i==0)
  { p=1;
    
            }

        }}
        if(p==0)
        {   printf("it is a prime number");
        }
        else {
            printf("it is not a prime number");
        }

        return 0;
    }