#include<stdio.h>

int main()
{
    int rem=0,sum=0,n,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
         while(n!=0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(temp==sum)
    {   printf(" It is a palindrome");
    }
    else
    {   printf(" It is not a palindrome");
    }

    return 0;
}