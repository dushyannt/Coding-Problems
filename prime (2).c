#include <stdio.h>

int main() 
{
 int n,i,f=0;
 printf("enter number: ");
 scanf("%d",&n);
 if(n==1 || n==0) 
   f=1;

  for(i=2;i<=n/2;i++)
 { if(n%i==0)
  { f=1;
    break;

}
}
 if(f==0)
{
printf("%d is a prime number",n);
}
else{printf("%d not prime",n);
}



return 0;
}













  