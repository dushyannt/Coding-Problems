#include<stdio.h>
int main()
{   int n,temp,sum=0,c=0,rem;
    printf("enter the number ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        c=c+1;
        n=n/10;
    }
    n=temp;
    while(n!=0)
    {   
        rem=n%10;
        sum=sum+pow(rem,c);
        n=n/10;
    }
    if(temp==sum)
    {   
        printf(" It is a Armstrong number");
    }
    else
    { 
          printf("It is not a Armstrong number");
    }
    return 0;

}



