#include<stdio.h>
int main()
{
 int d,y,w,D;
 printf("day");
 scanf("%d",&d);
 y=d/365;
 w=(d%365)/7;
 D=d-y*365-w*7;
 printf("%d %d %d",y,w,D);
 return 0;
}