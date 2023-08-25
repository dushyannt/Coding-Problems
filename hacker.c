#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int findn(int n, int a, int b, int c)
{
  //logic
   
  int sumnm1=findn(n-1,a,b,c);
  int sumnm2=findn(n-2,a,b,c);
  int sumnm3=findn(n-3,a,b,c);
  int sum=sumnm1+sumnm2+sumnm3;
    
    return sum;
}
int main() {
    int n, a, b,c;
    printf("enter the values");
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = findn(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}