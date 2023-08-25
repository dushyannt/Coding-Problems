#include <stdio.h>

int main() 
{
 int n,i,f;
 printf("enter number: ");
 scanf("%d",&n);
 if((n==1) || (n==0)) 
{ printf("not prime");
}else {
  for(i=2;i<=n/2;i++)
 { if((n%i)==0)
  { f=1;
    break;

}
}
 if(f==0)
{
printf("  prime ");
}
else{printf("not prime");
}



return 0;
}




}








  